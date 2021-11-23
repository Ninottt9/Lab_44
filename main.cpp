#include "lab07.h"
#include "lab07.h"
#include <cstring>
#include <iostream>

const int kBufferSize = 500;

int main() {
    std::cout << "\t\t\tList #1" << std::endl;
    TwoWayList testList;
    testList.prepare();
    
    ////////////////////////////////////////////////
    char buffer[kBufferSize];
    strcpy(buffer, "is");
    testList.prepend(buffer);
    strcpy(buffer, "This");
    testList.prepend(buffer);
    testList.append("test");
    testList.append("message");
    testList.append("of");
    testList.append("some");
    testList.append("non-zero");
    testList.append("length");

    TwoWayList* ptr2list = &testList;
    
    std::cout << ">> Is the list empty? " << std::boolalpha << ptr2list->empty() << std::endl;
    std::cout << ">> Let's print it:" << std::endl;
    ptr2list->dump();

    ////////////////////////////////////////////////
    std::cout << std::endl << ">> Some quick checks:" << std::endl;

    std::cout << ptr2list->getHead()->getData() << std::endl;
    std::cout << ptr2list->getHead()->getNext()->getData() << std::endl;
    std::cout << ptr2list->getTail()->getData() << std::endl;

    ////////////////////////////////////////////////
    std::cout << ">> Printed in reverse order:" << std::endl;
    ptr2list->dumpBack();

    /////////////////////////////////////////////////
    std::cout << "\n\n\t\t\tList #2" << std::endl;
    TwoWayList drugaLista;
    drugaLista.prepare();
    strcpy(buffer, "Today's task");
    drugaLista.prepend(buffer);
    strcpy(buffer, "was incredibly easy (?)");
    drugaLista.append(buffer);
    drugaLista.dump();

    ////////////////////////////////////////////////
    std::cout << "\n\n\t\t\tCleaning" << std::endl;
    testList.clear();
    std::cout << ">> Is the list empty? " 
              << std::boolalpha << testList.empty() << std::endl;
              
    std::cout << ">> What happens if an empty list is dumped?" << std::endl;
    ptr2list->dump();
    
    ////////////////////////////////////////////////
    drugaLista.dump();
    drugaLista.clear();
    drugaLista.clear();

    std::cout << std::endl;
}

/* // Output: ./Lab07
            List #1
>> Is the list empty? false
>> Let's print it:
This is test message of some non-zero length 
>> Some quick checks:
This
is
length
>> Printed in reverse order:
length non-zero some of message test is This 

            List #2
Today's task was incredibly easy (?) 

            Cleaning
>> Is the list empty? true
>> What happens if an empty list is dumped?
Today's task was incredibly easy (?)
*/
