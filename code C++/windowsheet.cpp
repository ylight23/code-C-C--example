#include "..\\SmallWindows\\SmallWindows.h"
#include "Token.h"
#include "Error.h"
#include "Scanner.h"
#include "TreeNode.h"
#include "Parser.h"
#include "Cell.h"
#include "CalcDocument.h"
void MainWindow(vector<String> /* argumentList */, WindowShow windowShow) {
	Application::ApplicationName() = TEXT("Calc");
	Application::MainWindowPtr() = new CalcDocument(windowShow);
}

class CalcDocument : public StandardDocument {
	public:
		CalcDocument(WindowShow windowShow);
		void OnMouseDown(MouseButton mouseButtons, Point mousePoint,
	bool shiftPressed, bool controlPressed);
	void OnMouseMove(MouseButton mouseButtons, Point mousePoint,
	bool shiftPressed, bool controlPressed);
	void OnDoubleClick(MouseButton mouseButtons, Point mousePoint,
	bool shiftPressed, bool controlPressed);
	void OnMouseUp(MouseButton mouseButtons, Point mousePoint,
	bool shiftPressed, bool controlPressed);
	virtual void OnHorizontalScroll(WORD flags, WORD x);
	virtual void OnVerticalScroll(WORD flags, WORD y);
	enum ClickArea {ClickAll, ClickRow, ClickColumn, ClickCell};
	ClickArea GetMouseLocation(Point mousePoint, Reference& cellRef) const;
	void MarkBlock(ClickArea clickArea, Reference newFirstMarkRef,Reference newLastMarkRef);
	void OnDraw(Graphics& graphics, DrawMode drawMode) const;
	void UpdateCaret();
	bool IsCellVisible(Reference cellRef) const;
	void MakeCellVisible();
	void MakeCellVisible(Reference cellRect);
	bool ToMarkMode();
	void Remark(Reference newFirstRef, Reference newLastRef);
	void OnChar(TCHAR tChar);
	bool OnKeyDown(WORD key, bool shiftPressed,
	bool controlPressed);
	void OnLeftArrowKey(bool shiftPressed);
	void OnRightArrowKey(bool shiftPressed);
	void OnUpArrowKey(bool shiftPressed);
	void OnDownArrowKey(bool shiftPressed);
	void OnHomeKey(bool shiftPressed, bool controlPressed);
	void OnEndKey(bool shiftPressed, bool controlPressed);
	void OnReturnKey();
	void OnTabulatorKey(bool shiftPressed);
	void OnEscapeKey();
	void OnDeleteKey();
	void OnBackspaceKey();
	void ClearDocument();
	bool ReadDocumentFromStream(String name, istream& inStream);
	bool WriteDocumentToStream(String name, ostream& outStream) const;
	static bool WriteSetMapToStream(const map<Reference, set<Reference>>& setMap, ostream& outStream);
	static bool ReadSetMapFromStream(map<Reference,set<Reference>> &setMap, istream& inStream);
	bool CopyEnable() const;
	bool IsCopyAsciiReady() const {return true;}
	bool IsCopyUnicodeReady() const {return true;}
	bool IsCopyGenericReady(int format) const {return true;}
	void CopyAscii(vector<String>& textList) const;
	void CopyUnicode(vector<String>& textList) const;
	void CopyGeneric(int format, InfoList& infoList) const;	
	bool IsPasteAsciiReady(const vector<String>& textList) const;
	bool IsPasteUnicodeReady(const vector<String>& textList) const;
	bool IsPasteGenericReady(int format, InfoList& infoList) const;
	void PasteAscii(const vector<String>& textList);
	void PasteUnicode(const vector<String>& textList);
	void PasteGeneric(int format, InfoList& infoList);
	bool DeleteEnable() const;
	void OnDelete();
	
		
