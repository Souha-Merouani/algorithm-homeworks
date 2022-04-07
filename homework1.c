#include<stdio.h>
#include<math.h>
main()
{
	int j,N,FinS,debutS,X,i;
	int T[100];
	do 
	{printf("donner la taille du tableau N \n");
	scanf("%d",&N);
	}
	while(N>100 ||N<0);
	for(i=0;i<N;i++){
		printf("donne %d\n",i," valeur du tableau:\n");
		scanf("%d",&T[i]);
	}
	FinS==0;
	i==1;
	while(i<N){
		while(i<N ||T[i]<T[i+1]){
			i+=1;
		}
		if(i<N){
			j=i+1;
			while(j<N ||T[j]<=T[j+1]){
				j+=1;
			}
			if(j-i+1>FinS){
				debutS=i;
				FinS=j-i+1;
			}
			i=j+1;
		}
	
	} 
	for(i=debutS;i<FinS;i++){
		X=T[debutS];
		T[debutS]=T[FinS];
		T[FinS]=X;
		
	}
	
	
	printf("le vecteur est ");
	for(i=0;i<N;i++){
		printf("%d",T[i]);
	}
	
	
}
