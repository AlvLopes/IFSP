programa {
	funcao inicio() {
	    inteiro ano = 0, mes = 0
	    inteiro maiorAno = -1
		real consumo[3][12]
	    real menorConsumo = -1.0
	    real valorConsumo
	    real totalAno[3]
	    real maiorValor = -1.0
		cadeia menorMes[3]
		cadeia meses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"}
		
		para(ano = 0; ano < 3; ano++) {
		
			para(mes = 0; mes < 12; mes++){
				

				escreva("Digite o consumo do mês de " + meses[mes] + " de " + (2019 + ano) + ": ")
				leia(valorConsumo)

				consumo[ano][mes] = valorConsumo
				
				se(consumo[ano][mes] <= menorConsumo ou menorConsumo == -1.0){
					menorMes[ano] = meses[mes]
					menorConsumo = consumo[ano][mes]
				}
			}

			escreva("\n\n")
		}


		para(ano = 0; ano < 3; ano++) {
			escreva("Menor consumo de " + (2019 + ano) + ": " + menorMes[ano] + "\n")
		}

		

		para(ano = 0; ano < 3; ano++){
			para(mes = 0; mes < 12; mes++){
				totalAno[ano] += consumo[ano][mes]
			}
		}

		
		
		para(ano = 0; ano < 3; ano++){
			se(totalAno[ano] >= maiorValor){
				maiorAno = ano
				maiorValor = totalAno[ano]
			}
		}

		escreva("\nAno de maior consumo: " + (2019 + maiorAno))
	}
	}

