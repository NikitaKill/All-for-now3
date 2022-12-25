#pragma once
#include <iostream>
#include "Comment.h"
using namespace std;
class Post {
private:
	string _title;
	string _text;
	Commento* _comments;
	int _commentsCount;
public:
	string GetTitle() 
	{
		return _title;
	}
	string GetText()
	{
		return _text;
	}
	Commento* GetComments() 
	{
		return _comments;
	}
	int GetCommentsCount()
	{
		return _commentsCount;
	}
	void SetTitle(string _Title)
	{
		_title = _Title;
	}
	void SetText(string _Text)
	{
		_text = _Text;
	}
	void SetCommentsCount(int _CommentsCount)
	{
		_commentsCount = _CommentsCount;
	}
	void SetComments(Commento* _Comments)
	{
		_comments = _Comments;
	}
	Post(string _Title = "", string _Text = "", Commento* _Comments = {}, int _CommentsCount = 0 ) {
		SetTitle(_Title);
		SetText(_Text);
		SetCommentsCount(_CommentsCount);
		SetComments(_Comments);
	}
};