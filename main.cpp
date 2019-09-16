#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

//STRINGS!!

//REPLACE
/* int main()
{
    std::string example = "In a dishwasher far far away";
    example.replace(5, 10, "galaxy");
    std::cout << example << std::endl;
    return 0;
    //Mire kell figyelni: a position 0-tól kezdődik! képlet: pos, cserélendő hossza, csere szöveg;
} */

//URL FIXER
/* int main()
{
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    url.replace(38, 3, "odd");
    url.insert(5, ":");
    std::cout << url << std::endl;
    return 0;
} */

//QUOTE
/* int main()
{
    std::string quote("Hofstadter's Law: It you expect, even when you take Hofstadter's Law into account.");
    quote.insert(20, " always takes longer than");
    std::cout << quote << std::endl;
    return 0;
} */

//TO DO
/*
int main()
{
    std::string todoText = " - Buy milk\n";
    todoText.insert(0, "My todo:\n");
    todoText.append(" - Download games\n" "    "" - Diablo\n");
    std::cout << todoText << std::endl;
} */

//REVERSE
/* void reversestri(std::string&);
int main()
{
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";
    reversestri(reversed);
    std::cout << reversed << std::endl;
    return 0;
}
void reversestri(std::string& reversed)
{
    int n = reversed.length();
    for (int i = 0; i < n/2; ++i) {
        std::swap(reversed[i], reversed[n - i - 1]);
    }
} */

//VECTORS!!

//LISTS 1
