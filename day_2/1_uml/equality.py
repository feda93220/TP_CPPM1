class A():
    def __eq__(self, __value: object) -> bool:
        # Un objet de type A sera égal à tout
        return True

class B():
    def __eq__(self, __value: object) -> bool:
        # Un objet de type B sera égal à rien
        return False

a = A()
a2 = A()
b = B()
b2 = B()

print(a == a2)
print(a == b)
print(b == a)
