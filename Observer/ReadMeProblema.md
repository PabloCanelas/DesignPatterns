# DesignPatterns
Laboratorio de arquitectura de software, implementacion de un patron de comportamiento.

# Problema:
Una pagina web de blogs y discuciones quiere implementar la funcionalidad de que su usuarios puedan subscribirse a un blog especifico. Cuando el blog realice un nuevo post debe ser notificado solo a los usuarios subscritos al blog
# Solucion:
Se implementa el patron Observer de modo que el blog(observable) sea "observado" por los usuarios(observers) y estos sean notificados en el momento que se realiza un post nuevo.
Todas las clases estan implementadas en DesignPatterns/Observer/src/headers
