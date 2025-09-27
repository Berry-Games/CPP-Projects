//Do not use std::bitset in this quiz. We’re only using std::bitset for printing.
//a) Add a line of code to set the article as viewed.
//b) Add a line of code to check if the article was deleted.
//c) Add a line of code to clear the article as a favorite.

#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    ((myArticleFlags |= option_viewed));


    if (myArticleFlags>>5)              //apparantly i dont need to shift it. I can use use bitmask. this is also wwont work..
    {
        std::cout << "The article was deleted.\n";
    }

    if (myArticleFlags & option_favorited)
    {
        myArticleFlags ^= option_favorited;
    }

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}
