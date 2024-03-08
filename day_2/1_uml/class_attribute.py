class Wizzard():
    # Un set est un element mutable (on peut le modifier sans avoir a le redéclarer)
    spells = set(("Imperium", "Lumos"))

harry = Wizzard()
hermione = Wizzard()
hermione.spells.add("Reparo") # Ajoute pour tout le monde
print(harry.spells)

neville = Wizzard()
neville.spells.clear() # Peut être dangereux, ici cela reset pour tout le monde.
print(harry.spells)
