#include <stdio.h>
int bjp=0, congress=0, tdp=0, ysrcp=0;
void electionResult()
{
    int wonByVote;
    if (bjp > congress && bjp > tdp && bjp > ysrcp)
    {
        printf("\n************************************\n");
        printf("*|*     BJP won the election     *|*\n");
        printf("************************************\n");
        printf("Total vote of BJP : %d\n",bjp);
        wonByVote=bjp-congress;
        printf("BJP won by %d votes to Congress\n",wonByVote);
        wonByVote=bjp-tdp;
        printf("BJP won by %d votes to TDP\n",wonByVote);
        wonByVote=bjp-ysrcp;
        printf("BJP won by %d votes to YSRCP\n",wonByVote);
    }
    else if (congress > tdp && congress > ysrcp)
    {
        printf("\n************************************\n");
        printf("*|*  CONGRESS won the election   *|*\n");
        printf("************************************\n");
        printf("Total vote of Congress : %d\n",congress);
        wonByVote=congress-bjp;
        printf("Congress won by %d votes to BJP\n",wonByVote);
        wonByVote=congress-tdp;
        printf("Congress won by %d votes to TDP\n",wonByVote);
        wonByVote=congress-ysrcp;
        printf("Congress won by %d votes to YSRCP\n",wonByVote);
    }
    else if (tdp > ysrcp)
    {
        printf("\n************************************\n");
        printf("*|*     TDP won the election     *|*\n");
        printf("************************************\n");
        printf("Total vote of TDP : %d\n",tdp);
        wonByVote=tdp-congress;
        printf("TDP won by %d votes to Congress\n",wonByVote);
        wonByVote=tdp-bjp;
        printf("TDP won by %d votes to BJP\n",wonByVote);
        wonByVote=tdp-ysrcp;
        printf("TDP won by %d votes to YSRCP\n",wonByVote);
    }
    else if(bjp == congress && bjp == tdp && bjp == ysrcp)
    {
        printf("\nNo one won the election\n\n");
        printf("            BJP---Congress---TDP---YSRCP\n");
        printf("Total Vote   %d       %d        %d     %d\n",bjp,congress,tdp,ysrcp);
    }
    else
    {
        printf("\n************************************\n");
        printf("*|*    YSRCP won the election    *|*\n");
        printf("************************************\n");
        printf("Total vote of YSRCP : %d\n",ysrcp);
        wonByVote=ysrcp-congress;
        printf("YSRCP won by %d votes to Congress\n",wonByVote);
        wonByVote=ysrcp-tdp;
        printf("YSRCP won by %d votes to AAP\n",wonByVote);
        wonByVote=ysrcp-bjp;
        printf("YSRCP won by %d votes to BJP\n",wonByVote);
    }
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        bjp+=1;
        break;
    case 2:
        congress+=1;
        break;
    case 3:
        tdp+=1;
        break;
    case 4:
        ysrcp+=1;
        break;
    }
}
void main()
{
    int choose;
    
    
        printf("\n*********Welcome to the simple voting system project*********\n\n");
        printf("**************  BY VIKRAM and GOPIKRISHNAN  *****************\n");
        printf("\n*************************************************************\n");
        printf("                         MP election                        \n");
        printf("*************************************************************\n");
        printf("|           1.BJP             |          2.Congress         |\n");
        printf("*************************************************************\n");
        printf("|           3.TDP             |          4.YSRCP            |\n");
        printf("*************************************************************\n\n");
    do
    {    
        printf("Press 1 to vote BJP\n");
        printf("Press 2 to vote Congress\n");
        printf("Press 3 to vote TDP\n");
        printf("Press 4 to vote YSRCP\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        printf("\n\n");
        if (choose==5)
        {
            electionResult();
        }else
        {
            calculateVote(choose);            
        } 
        printf("\n");
    } while (choose != 5);
}
