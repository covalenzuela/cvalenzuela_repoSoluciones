#romano debe ser string 
def romano_a_arabigo(romano):
	numero_a=0
	valores={"M":1000,
			"D":500,
			"C":100,
			"L":50,
			"X":10,
			"V":5,
			"I":1
			}	
	
	if len(romano)>0:
		anterior=romano[0]
		
	#letra es del diccionario
	for letra in romano:
		#para ver si la letra es valida (esta en el dic)
		if letra in valores:
			actual=valores[letra]
		else:
			print("valor no valido", letra)
			return 'no_valid'
		
		#si la letra es valida y 
		#numero anterior es mayor al actual se suman
		if  anterior>=actual:
			numero_a+=actual
		#o si no se restan 		
		else:
			numero_a+=actual-(2*anterior)
	#pasa al sgte numero
	anterior=actual
	return numero_a

romano=raw_input("Numero en Romano: ").upper() #UPPER TRANSPFORMA A MAYUSCULA
print('Numero Arabego: ',romano_a_arabigo(romano))	
