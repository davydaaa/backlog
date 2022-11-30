#pragma once

#include <iostream>
using namespace std;

class Bug
{
public:
	Bug()
	{

	}

	Bug(string description, string severity, string deadline, string status, string assignee)
	{
		this->description = description;
		this->severity = severity;
		this->deadline = deadline;
		this->status = status;
		this->assignee = assignee;
	}

	//getters
	string get_description() {
		return description;
	}

	string get_severity() {
		return severity;
	}

	string get_deadline() {
		return deadline;
	}

	string get_status() {
		return status;
	}

	string get_assignee() {
		return assignee;
	}

	//setters 
	void set_description(string description) {
		this->description = description;
	}

	void set_severity(string severity) {
		this->severity = severity;
	}

	void set_deadline(string deadline) {
		this->deadline = deadline;
	}

	void set_status(string status) {
		this->status = status;
	}

	void set_assignee(string assignee) {
		this->assignee = assignee;
	}

	~Bug() {

	}

private:
	string description;
	string severity;
	string deadline;
	string status;
	string assignee;
};

class Backlog
{

public:

	Bug list[3];

	void sort_list() {
		for (int i = 0; i < 3; i++)
		{
			if (list[i].get_severity() == "easy") {
				print_list(i);
			}
		}

		for (int i = 0; i < 3; i++)
		{
			if (list[i].get_severity() == "medium") {
				print_list(i);
			}
		}

		for (int i = 0; i < 3; i++)
		{
			if (list[i].get_severity() == "hard") {
				print_list(i);
			}
		}
	}

	void print_list(int x) {
		cout << "description: " << list[x].get_description() << endl;
		cout << "severity: " << list[x].get_severity() << endl;
		cout << "deadline: " << list[x].get_deadline() << endl;
		cout << "status: " << list[x].get_status() << endl;
		cout << "assignee: " << list[x].get_assignee() << endl << endl;
	}

	void print_resolved(int k) {

		if (list[k].get_status() == "resolved") {
			print_list(k);
		}
		else {
			cout << "bug is not resolved yet" << endl;
		}

	}

	~Backlog() {

	}
};
