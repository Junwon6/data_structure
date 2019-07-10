#include "DQueue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char deletedItem;
	DQueue* DQ = new DQueue();


	for (char c = 'a'; c < ('a'+10); c++) {
		DQ->insertRear(c);
	}
	DQ->printDQueue();
	
	DQ->deleteRear();
	DQ->deleteRear();
	DQ->deleteRear();
	DQ->deleteRear();
	
	DQ->printDQueue();
	return 0;
}
