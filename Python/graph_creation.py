n = int(input("Enter the number of vertices"))
nodes = []
edges = {}
status = {}
print("Enter the vertices")
for i in range(n):
    nodes.append(input("Enter %d vertex: "%i))
    edges[nodes[i]] = []
    status[nodes[i]] = 0

print("Enter edges:")

while True:
    choice = int(input("Enter 1 to add and 0 to break"))

    if choice == 0:
        break;
    else:
        src = input("Enter source vertex:")
        dest = input("Enter destination vertex")
        if not (src in nodes and dest in nodes):
            raise ValueError("Node not in graph")
        else:
            edges[src].append(dest)
print("\n\nGraph is :")
for i in nodes:
    for j in edges[i]:
        print(i + "-->" + j)

print("Nodes are: \n", nodes,"\nEdges are: \n", edges)
