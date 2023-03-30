/*
 * COMP10050 Software Engineering Assignment 3
 * Group BQ
 *      Jack Dunne          22483576
 *      Maciej Szmagara     22325591
 * https://csgitlab.ucd.ie/jack-dunne626/bqassignment3.git
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"

char filename[MAX_FILENAME] = "default.txt";

void display_Board()
{
    printf("\n");
    // open filename (unless other board loaded, it's default.txt)
    FILE *fp;
    fp = fopen(filename,"r");
    // print contents while file pointer != eof
    int c = fgetc(fp);
    while (c != EOF)
    {
        printf("%c",c);
        c = fgetc(fp);
    }
    // close
    fclose(fp);
    printf("\n");
}

void load_Board()
{
    printf("\n");
    // set filename equal to whatever is entered
    printf("Enter filename:\n");
    scanf("%s",filename);
    // open filename
    FILE *fp;
    fp = fopen(filename,"r");
    // if it cannot be opened, display error
    if (fp == NULL)
    {
        printf("%s could not be opened.\n",filename);
    }
    // print all contents
    int c = fgetc(fp);
    while (c != EOF)
    {
        printf("%c",c);
        c = fgetc(fp);
    }
    // close
    fclose(fp);
    printf("\n");
}

void edit_List()
{

}

void edit_Board()
{

}

void save_Board()
{

}

int menu()
{
    int choice;
    printf("\nMenu:\n\t1.\tDisplay board\n\t2.\tLoad board from file\n\t3.\tEdit list\n\t4.\tEdit board\n\t5.\tSave board to file\n\t6.\tQuit\n");
    printf("Enter your choice (1-6):\n");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            display_Board();
            break;
        case 2:
            load_Board();
            break;
        case 3:
            edit_List();
            break;
        case 4:
            edit_Board();
            break;
        case 5:
            save_Board();
            break;
        case 6:
            exit(0);
        default: // error checking
            printf("Invalid entry.\n");
            exit(1);
    }
}

int main(void)
{

    printf("Kanban-style Board Program\n");
    while (1)
    {
        menu();
    }
}

/*
                      .           ....    ::     .
                      .           :::ii11i11iiii;;: :
                     ..... :;;i1itLLLLCCCftft11ii1ii;:
                      :::;1t1tfLCCCCCCCCCCLft111i;;:::::
                   ;1tLCCCCCLLLLCLCCCCCCLCLtt1ii;;;;:;i::
                 ;1tfLCCGLffLLCCGGGGGGGGGGCCLLLLfff1i;;1tt;
                :1fLCGGGLfLCGG0000G0000000GGGGGGGGGCLf1ifLLti:
              . itLGG0GLLG0000000000000000000GGGGGCCLLft11tCCfi:
              :tCGGGGCCC0000000000000000000000GGGGCCLft111i1LLfti:
             :tCG0000GG00000000000000000000000GGGGCLLft1i111tti1t1;:
    .       :tCGG00G000000000000000000000000000GGGCLLft1ii;:ii;:ii1;;
    ...   ::1LG000000000000000000000000000000000GGGCLftti;: ;i: :::;;:
    ..   ::iLG00000G0000000000000000000000000000000GCLfti:  :1;::;;;;:
        ;1LG000000GGG00GGGG0000000088888000000000000CLff1i:  i;11ii11i:
      ;tLG000000000GGGCCGGGG000000GCLLLCCGCCCCCGGCLti::;;i;: :;1111iii;: .
    ;tGGGGGGG0G00G00GCLLGGGGGGGCLLf1;;::::;:;111i; .  :       :;1tt1i;:;;:
    CGCCCCGGGGC0GCGGCffCGGGGCLffLLCCfi:  . ifLi.. .. ::::...   itff1;: :;:;:
    CLLLCGGGGGGCCCCLttCGGGCLtiii;;; .  . :tG00f  ::: . . ....  :;ii1i  :::;;:
    LLLCCGCCGCLLfLLft1LCGGCLt1itLCLt11i1fC0000C1itti;;;:::    :;;::;i :;:;::
    tfCCCCLLffftttffttfCGGGGGGG000CLffCG000000GLttftttttt11;   :;: :  :;;:::::
    LCCLffLttLft1i;1fLtfCCGG00000GGCG08000008000L1tLCCLffLt: ..:;;:::::;i::::::
    Lffttt1ifftftiiiit11fLLCG000000880GCG80GG00C1:;1fLLLLfi:... ;;;;::: :;::: :
    tt1t1ii1t1tt1;:;;t1;1LLCCG000000GCCGCf1::;; .. 111tfLti:....: ::::     ::::
    i11ii1i111i:;i1t1tt;1tLGGGG0000CGG0Gf;.........:i;;ii;: ....  :      .    :
    ;;;;ii1i;i:;tt1tttt1itfCGGGG0GCCL11;:         .. .          ::;:   ..
    ;;;i;iii;:itfi1ttftfCLffLLLLL1;1: :: ... ... .........  .. : ::;;::
    ::::;i:;;;:;1iitLLLLCLf11ttt1::::  .........................
    ;::::::i;;:;;11LCLLf1ttiif11;:: .........   ................  :
    :: ::::: :::itfLLLffftttft:; ... ....  ..... .     .......      :::::
    ::::   ... :1fLfftLffLLLLt:   ..  .. .  :   :;ii;;:    .   :;;;::::
    :::::  ...:i1LLCLCCLLCCLf111;::;t1;111ii111i11i1iii11;::;i;:;ii;
    :::;:: .. i1tLCGCCCCCGCLfttft1tfLCCCCGCCLLCL11i11t1i1;;i;1i;:;iii;:
    ::;::::: ittLGGCCLCCCGCCGCftttLCCGCGG0GCLtfLfLtttfftt111111i;i;;iii;:
    :::::::::tLLCCGCCCCCGGG0CLLtfLCCCCCGCCGLttt;1f11ttfLLtft1iiiii:;;;i1;::::::::
    ::::::::iLCLLCGGCCCGG0GCfLLLGCCCCCCGCCGCffL11fLfftffffft11i;;i;ii1ii;:::::::::
    ::::;;:;1tfLCCGCGGG000GCCLLCCGGGCCCCCCCCLttfttttttft1tftiiii;;i;;;;;:;::::::
    :;;;;;;;1iifLCCLfG00GGCCGGGCCGGGGCGCLfLLLLtftf1111fftf11iiii;tff1;:   ...       :::::::
    ;;;;;;::;ii1ffLffGGGGCGGCCCCCCCCCCGGCLLLCCff1111ii11ftt111ttttf1tLi............... ::::
    ;;;: .... ::i;fLLLLGCCCCCGCCGGGCLCGCLffCCLttt11i11;ii11tffLLLft1tiit:.. .........  . :::::
    :  .......: .  if11fCLffLCCCCGCCLLCLLLffLfftttt11111i11tLfLf1tf;;fLtitf1  ............:: ::
    .....  ..  ....;1itt1ii;itfLLCCLCLftfLttLtftttt1t1i11tttfLfft  .: ;tf11t  ........... .:
       ............   :;  .....:;11i111i11fLti1i11ii1t1t111i1ffLLf;..i11.    ..............
              .......... .  ...... . . :;;11i;;it11t1t1111111fLLfLLffLLL.....................
       ::           ........ ..............   .. i1tff111tfffLCLLLfLLfL; ......................
       :;;;;::         ......  ................... ;tLLLLCCGGGCfffffffLL1   .....................
      .. ;1111i;      ::: ....   ...... ............ 1CGG00000GCCLLLLLLG0Gt:.......................
    ii:  :i11111i;:   :::::  ...  ....   ..          .;L0000008800000000008Gf;......................
    ii:  :i11111i;:   :::::                           ;L0000000800000000008Gf;
 */
