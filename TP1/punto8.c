/*
8) Analice lo siguiente:
When a new process is created via fork(), the kernel ensures not only that it has a unique process
ID, but also that the process ID doesn’t match the process group ID or session ID of any existing
process. Thus, even if the leader of a process group or a session has exited, a new process can’t
reuse the leader’s process ID and thereby accidentally become the leader of an existing session or
process group.
Que implicancias tiene dicha afirmación. 


*/