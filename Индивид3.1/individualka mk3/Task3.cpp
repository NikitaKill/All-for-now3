#include <iostream>
#include "Post.h"
#include "Comment.h"
#include "Blog.h"
#include <string>
#include <stdio.h>
#include <random>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	string Title, Text, CommentAuthor, CommentText;
	Post post1[5];
	Commento* com[3];
	for (int i = 0; i < 5; i++) {
		cout << "Введите " << i + 1 << " заголовок: ";
		cin >> Title;
		post1[i].SetTitle(Title + to_string(i + 1));
		cout << "Введите " << i + 1 << " текст: ";
		cin >> Text;
		post1[i].SetText(Text + to_string(i + 1));
		post1[i].SetCommentsCount((i + 1));
		for (int j = 0; j < 3; j++) {
			cout << "Коментарий к тексту: " << j + 1 << " ";
			cin >> CommentText;
			cout << "Коментарий автора: " << j + 1 << " ";
			cin >> CommentAuthor;
			com[j] = new Commento(CommentAuthor, CommentText);
			post1[i].SetComments(com[j]);
		}
	}
	string UserName;
	cout << "Введите пользователя: ";
	cin >> UserName;
	Blog show = Blog(post1, 5, UserName);
	cout << "Имя пользователя: " << show.GetUser() << " Колво коментов: " << show.GetPostCount() << "коменты: " << show.GetPosts();
}