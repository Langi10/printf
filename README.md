   <h1 class="gap">0x11. C - printf</h1>

  <div class="panel-body">
    <h2>Background Context</h2>

<p>Write your own <code>printf</code> function.</p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/7Vw7aUWgwC7JYUrqI4bh4Q" title="Secrets of printf" target="_blank">Secrets of printf</a> </li>
<li><strong>Group Projects</strong> concept page (<em>Don’t forget to read this</em>)</li>
<li><strong>Flowcharts</strong> concept page</li>
</ul>

<p><strong>man or help</strong>:</p>

<ul>
<li><code>printf (3)</code></li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>main.h</code></li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>Note that we will not provide the <code>_putchar</code> function for this project</li>
</ul>

<h3>GitHub</h3>

<p><strong>There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%</strong></p>

<h2>More Info</h2>

<h3>Authorized functions and macros</h3>

<ul>
<li><code>write</code> (<code>man 2 write</code>)</li>
<li><code>malloc</code> (<code>man 3 malloc</code>)</li>
<li><code>free</code> (<code>man 3 free</code>)</li>
<li><code>va_start</code> (<code>man 3 va_start</code>)</li>
<li><code>va_end</code> (<code>man 3 va_end</code>)</li>
<li><code>va_copy</code> (<code>man 3 va_copy</code>)</li>
<li><code>va_arg</code> (<code>man 3 va_arg</code>)</li>
</ul>

<h3>Compilation</h3>

<ul>
<li>Your code will be compiled this way:</li>
</ul>

<pre><code>$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
</code></pre>

<ul>
<li>As a consequence, be careful not to push any c file containing a <code>main</code> function in the root directory of your project (you could have a <code>test</code> folder containing all your tests files including <code>main</code> functions)</li>
<li>Our main files will include your main header file (<code>main.h</code>): <code>#include main.h</code></li>
<li>You might want to look at the gcc flag <code>-Wno-format</code> when testing with your <code>_printf</code> and the standard <code>printf</code>. Example of test file that you could use:</li>
</ul>

<pre><code>alex@ubuntu:~/c/printf$ cat main.c 
#include &lt;limits.h&gt;
#include &lt;stdio.h&gt;
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
</code></pre>

<ul>
<li>We strongly encourage you to work all together on a set of tests</li>
<li>If the task does not specify what to do with an edge case, do the same as <code>printf</code></li>
</ul>

  </div>
</div>
    <h3 class="panel-title">
      0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
    </h3>
  </div>
<ul>
<li>Prototype: <code>int _printf(const char *format, ...);</code></li>
<li>Returns: the number of characters printed (excluding the null byte used to end output to strings)</li>
<li>write output to stdout, the standard output stream</li>
<li><code>format</code> is a character string. The format string is composed of zero or more directives. See <code>man 3 printf</code> for more detail. You need to handle the following conversion specifiers: 

<ul>
<li><code>c</code></li>
<li><code>s</code></li>
<li><code>%</code></li>
</ul></li>
<li>You don’t have to reproduce the buffer handling of the C library <code>printf</code> function</li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>
</div>
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. Education is when you read the fine print. Experience is what you get if you don't
    </h3>
</div>

  <div class="panel-body">
    <p>Handle the following conversion specifiers:</p>

<ul>
<li><code>d</code></li>
<li><code>i</code></li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>
 </div>
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. With a face like mine, I do better in print
    </h3>
    <p>Handle the following custom conversion specifiers:</p>

<ul>
<li><code>b</code>: the unsigned int argument is converted to binary</li>
</ul>

<pre><code>alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
</code></pre>

  </div>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      3. What one has not experienced, one will never understand in print
    </h3>
    <p>Handle the following conversion specifiers:</p>

<ul>
<li><code>u</code></li>
<li><code>o</code></li>
<li><code>x</code></li>
<li><code>X</code></li>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>

  </div>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      4. Nothing in fine print is ever good news
    </h3>

  </div>

  <div class="panel-body">
    <p>Use a local buffer of 1024 chars in order to call <code>write</code> as little as possible.</p>

  </div>
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      5. My weakness is wearing too much leopard print
    </h3>
  </div>

  <div class="panel-body">
    <p>Handle the following custom conversion specifier:</p>

<ul>
<li><code>S</code> : prints the string.</li>
<li>Non printable characters (0 &lt; ASCII value &lt; 32 or &gt;= 127) are printed this way: <code>\x</code>, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)</li>
</ul>

<pre><code>alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Best\x0ASchool
alex@ubuntu:~/c/printf$
</code></pre>
  </div>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
    </h3>
  </div>

  <div class="panel-body">
    <p>Handle the following conversion specifier: <code>p</code>.</p>

<ul>
<li>You don’t have to handle the flag characters</li>
<li>You don’t have to handle field width</li>
<li>You don’t have to handle precision</li>
<li>You don’t have to handle the length modifiers</li>
</ul>
  </div>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      7. The big print gives and the small print takes away
    </h3>
  </div>

  <div class="panel-body">
    <p>Handle the following flag characters for non-custom conversion specifiers:</p>

<ul>
<li><code>+</code></li>
<li>space</li>
<li><code>#</code></li>
</ul>
</div>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      8. Sarcasm is lost in print
    </h3>
  </div>

  <div class="panel-body">    
    <p>Handle the following length modifiers for non-custom conversion specifiers:</p>

<ul>
<li><code>l</code></li>
<li><code>h</code></li>
</ul>

<p>Conversion specifiers to handle: <code>d</code>, <code>i</code>, <code>u</code>, <code>o</code>, <code>x</code>, <code>X</code></p>
  </div>
  
  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      9. Print some money and give it to us for the rain forests
    </h3>
  </div>

  <div class="panel-body">   
    <p>Handle the field width for non-custom conversion specifiers.</p>
  </div> 

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      10. The negative is the equivalent of the composer's score, and the print the performance
    </h3>    
  </div>
  
  <div class="panel-body">   
    <p>Handle the precision for non-custom conversion specifiers.</p>
  </div>  

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      11. It's depressing when you're still around and your albums are out of print
    </h3>        
  </div>

  <div class="panel-body">    
    <p>Handle the <code>0</code> flag character for non-custom conversion specifiers.</p>
  </div>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
    </h3> 
  </div>

  <div class="panel-body">    
    <p>Handle the <code>-</code> flag character for non-custom conversion specifiers.</p>
  </div>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      13. Print is the sharpest and the strongest weapon of our party
    </h3>   
  </div>

  <div class="panel-body">    
    <p>Handle the following custom conversion specifier:</p>

<ul>
<li><code>r</code> : prints the reversed string</li>
</ul>
  </div>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      14. The flood of print has turned reading into a process of gulping rather than savoring
    </h3>    
  </div>

  <div class="panel-body">   
    <p>Handle the following custom conversion specifier:</p>

<ul>
<li><code>R</code>: prints the rot13'ed string</li>
</ul>
  </div>


  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      15. *
    </h3>
  </div>

  <div class="panel-body">    
    <p>All the above options work well together.</p>
  </div>


## Author
* **Mayaka Nyaberi** - [The_ Quadzilla](https://github.com/nyaberi-mayaka) && **Abdulrahman Omboke** - [Langi](https://github.com/Langi10)
