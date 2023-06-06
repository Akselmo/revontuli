/**
* SPDX-FileCopyrightText: 2020 Christoph Cullmann <cullmann@kde.org>
* SPDX-License-Identifier: MIT
* From Akselmo: This test file is from Kate, but modified. It can be used for checking
* quickly how the highlighting looks.
*/

// BEGIN
#include <cstdint>
#include <string>
// END

/**
* TODO: improve documentation
* @param argc argument count
* @param argv argument values
* @return magic return value
**/

int main(int argc, char *argv[])
{
    if (argc > 1) {
        const std::string string = "source file: \"" __FILE__ "\"";
        return rand();
    }

    /* BUG: bogus integer constant inside next line */
    const double g = 1.1e12 * 0b01'01'01'01 - 43a + 0x11234 * 0234ULL - 'c' * 42;
    return g > 1.3f;
}