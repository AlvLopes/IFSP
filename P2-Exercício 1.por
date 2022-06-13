programa {
	funcao inicio() {
		
		inteiro i=-1
		real alturaCampinas[6], alturaHortolandia[6], alturaSalto[6]
		real maior[3]
		maior[0] = 0.0
		maior[1] = 0.0
		maior[2] = 0.0
		
		para (i=0;i<6;i++){
		    escreva ("Digite a altura: ")
		    leia (alturaCampinas[i])
		    
		    se (alturaCampinas[i]>maior[0]){
		        
		        maior[0]=alturaCampinas[i]
		    }
		    
		    escreva ("\nDigite a altura: ")
		    leia (alturaHortolandia[i])
		    
		       se (alturaHortolandia[i]>maior[1]){
		        
		        maior[1]=alturaHortolandia[i]
		    }
		    
		    escreva ("\nDigite a altura: ")
		    leia (alturaSalto[i])
		    
		       se (alturaSalto[i]>maior[2]){
		        
		        maior[2]=alturaSalto[i]
		    }
		    
		}
	
	escreva ("\nMaior Altura de Campinas: ", maior[0])
	escreva ("\nMaior Altura de Hotolândia: ", maior[1])
	escreva ("\nMaior Altura de Campinas: ", maior[2])
		
	}
}
