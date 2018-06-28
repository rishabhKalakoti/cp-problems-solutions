#include<math.h>
#include<stdio.h>
#define ll long long
int main()
{
    ll T;
    scanf("%lli",&T);
    while(T--)
    {
        // input
        int N,S,Y;
        scanf("%i %i %i",&N,&S,&Y);
        ll V[N],D[N],P[N],C[N];
        for(ll i=0; i<N;i++)
            scanf("%lli",&V[i]);
        for(ll i=0; i<N;i++)
            scanf("%lli",&D[i]);
        for(ll i=0; i<N;i++)
            scanf("%lli",&P[i]);
        for(ll i=0; i<N;i++)
            scanf("%lli",&C[i]);
        
        // variables
        long double t=0.0;
        //double d=0.0;
        long double d=0.000001;
        long double lane=Y/(S*1.0);
        
        long double rec[N][2];
        // pre-process N cars
        // list time at which they are d distance near to x=0
        // initial and final. -1 if not possible
        for(ll i=0; i<N;i++)
        {
            rec[i][0]=(((D[i]==0)?(1.0):(-1.0))*P[i]-d)/(V[i]*1.0);
            rec[i][1]=(((D[i]==0)?(1.0):(-1.0))*P[i]+C[i]*1.0+d)/(V[i]*1.0);
        }
        
        // greedy iteration
        for(ll i=0; i<N;i++)
        {
            //printf("s:%.10lf e:%.10lf t:%.10lf lane:%.10lf\n",rec[i][0],rec[i][1],t,lane);
            if(((t-rec[i][0])*(t+lane-rec[i][0]) < 0.0) ||
            (((t-rec[i][1])*(t+lane-rec[i][1])) < 0.0) ||
            ((t-rec[i][0])*(t-rec[i][1]) < 0.0) ||
            (((t+lane-rec[i][0])*(t+lane-rec[i][1])) < 0.0) ||
            (abs(t-rec[i][0])<=d) || (abs(t+lane-rec[i][0]) <= d) ||
            (abs(t-rec[i][1])<=d) || (abs(t+lane-rec[i][1]) <=d)
            )
                t=rec[i][1]+lane;
            else
                t+=lane;
        }
        // output
        printf("%.10Lf\n",t);
        
    }
    return 0;
}