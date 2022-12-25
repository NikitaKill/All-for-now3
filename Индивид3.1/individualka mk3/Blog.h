#pragma once
#include <iostream>
#include "Post.h"
using namespace std;
class Blog {
private:
	Post* _post;
	int _postCount;
	string _user;
public:
	Post* GetPosts()
	{
		return _post;
	}
	int GetPostCount() 
	{
		return _postCount;
	}
	string GetUser() 
	{
		return _user;
	}
	void SetPosts(Post* _Post) 
	{
		_post = _Post;
	}
	void SetPostCount(int _PostCount) 
	{
		_postCount = _PostCount;
	}
	void SetUser(string _User) 
	{
		_user = _User;
	}
	Blog(Post* _Post = {}, int _PostCount = 0, string _User = "") {
		SetPosts(_Post);
		SetPostCount(_PostCount);
		SetUser(_User);
	}
};