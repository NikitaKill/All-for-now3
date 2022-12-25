#pragma once
#include <iostream>
using namespace std;
class Commento {
private:
	string _author;
	string _text;
public:
	string GetAuthor() {
		return _author;
	}
	string GetText() {
		return _text;
	}
	void SetAuthor(string _Author) {
		_author = _Author;
	}
	void SetText(string _Text) {	
		_text = _Text;
	}
	Commento(string _author = "", string _text = "") {
		SetAuthor(_author);
		SetText(_text);
	}
};