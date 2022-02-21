/*Each project consists of a completion date and we need to check if the completion is possible given a task, for each task we have an estimate, if it is completed or not, a user assigned and a list of dependent tasks*/

class Project {
public:
	int completion_date;
	bool isCompletionPossible(Task initial_task);
};

class Task {
public:
	int estimate;
	bool isCompleted;
	String user;
	vector<Task> dependents;
};
