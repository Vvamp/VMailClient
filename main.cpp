#include <iostream>
#include <locale>
#include <clocale>

#include "vmime/vmime.hpp"
#include "vmime/platforms/posix/posixHandler.hpp"


int main(){
    vmime::mailbox firstAccount;
    const vmime::text name("Vincent van Setten");
    firstAccount.setName(name); 

    std::cout <<  firstAccount.getName().getWholeBuffer();


    return 0;
}