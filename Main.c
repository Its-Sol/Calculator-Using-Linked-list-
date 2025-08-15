#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
#include "Calculator.h"
#include "LinkedList.h"

#define _(String) gettext(String)

int main(void){
	bindtextdomain("base", "./Locales/");
	textdomain("base");

	Node *head;
	Node *tail;
	Node *node;
	int choice = 0, num1 = 0, num2 = 0;
	
	do{

			printf(_("Please choose one of the options below.\n")				_("0 to Quit.\n" "1 to Add.\n") 
				_("2 to Subtract\n" "3 for Division\n")
			        _("or 4 to Multiply.\n"));	
		
		switch(choice){
			case(ADD):
				add(num1, num2);
				break;
			case(SUBTRACT)
				subtract(num1, num2);
				break;
			case(DIVISION)
				division(num1, num2);
				break;
			case(MULTIPLY)
				multiply(num1, num2);
				break;
			default:
				printf(_("Invalid choice.\n")); 
		}
	}while(choice != 0)

return 0;
}
