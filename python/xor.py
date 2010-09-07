def swap(A,B):
  A = A^B
  B = A^B
  A = A^B
  return A,B

A = 7
B = 4
print("A=%d B=%d" % (A,B))
A,B = swap(A,B)
print("A=%d B=%d" % (A,B))

