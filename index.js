// Print Microsoft Visual C / C++ Preprocessor Defines
// Copyright (c) 2021 Max Vilimpoc
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

//
// Grab the list of preprocessor defines from the Microsoft website:
// https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-160
//

const getDefines = () => {
    let defines = $$('main > ul > li > p:first-child > code:first-child');

    return defines;
};

const makeDefinesString = (defines) => {
    let definesString = '';

    defines.forEach((e) => {
        const define = e.innerText;

        if (define === '__func__') {
            return;
        }
        else {
            const key = (`${define}` + "                              ").substr(0, 24);
            definesString += `
    #ifdef ${define}
    "${key} : " xstr(${define}) "\\n"
    #else
    "${key} : " "Not Defined" "\\n"
    #endif
`;
        }
    });

    return `static const char * const MSVC_DEFINES = ""
${definesString}
;`;
};

const makeProgram = () => {
    let defines = getDefines();

    let code = `// Print Microsoft Visual C / C++ Preprocessor Defines
// Copyright (c) 2021 Max Vilimpoc
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#include <stdio.h>

#define xstr(s) str(s)
#define str(s) #s

${makeDefinesString(defines)}

int main(int argc, char **argv)
{
    printf("Compiled with the following preprocessor #defines:\\n\\n");

    puts(MSVC_DEFINES);

    return 0;
}
`;

    return code;
};

const main = () => {
    console.log(makeProgram());
};
