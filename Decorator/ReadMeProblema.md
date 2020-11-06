# DesignPatterns
Laboratorio de arquitectura de software, implementacion de un patron de diseño estructural.

# Problema:
Se quiere desarrollar un juego que tiene dos tipos de enemigos (Base y Titan) ambos reciben diferentes daños al ser atacados, estos enemigos pueden tener armadura de madera o de oro que deetermina cuanta proteccion extra tienen para los ataques.
Se requiere implementar todos los tipos de enemigos con la menor cantidad de clases posibles.
# Solucion:
Se implementa el patron Decorator de modo que se implementen clases de enemigos y estos pueden ser decorados por las clases WoodArmorDecorator y GoldArmorDecorator de modo que no sea necesario crear clases extra de cada armadura para cada tipo de enemigo.
Todas las clases estan implementadas en DesignPatterns/Decorator//src/headers
