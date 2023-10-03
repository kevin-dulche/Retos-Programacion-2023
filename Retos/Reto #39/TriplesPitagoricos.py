'''
 Crea una función que encuentre todos los triples pitagóricos
 (ternas) menores o iguales a un número dado.
 - Debes buscar información sobre qué es un triple pitagórico.
 - La función únicamente recibe el número máximo que puede
   aparecer en el triple.
 - Ejemplo: Los triples menores o iguales a 10 están
 formados por (3, 4, 5) y (6, 8, 10).
'''

def encontrarTriples(maximo):
    triplesPitagoricos = []
    for i in range(1,maximo):
        for j in range(i, maximo):
            for k in range(j, maximo):
                if (i**2 + j**2 == k**2):
                    trip = (i, j, k)
                    triplesPitagoricos.append(trip)
    return triplesPitagoricos

max = 10
buscarTriples = encontrarTriples(max)
print(buscarTriples)