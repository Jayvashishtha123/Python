graph = {
'S': ['A','B','C'],
'A': ['E'],
'B': ['H'],
'C': ['D','E'],
'D': ['G'],
'E': ['F'],
'F': ['G'],
'G': [],
'H': ['F']
}

visited = set() 

def dfs(visited, graph, node):  
    if node not in visited:
        print (node)
        visited.add(node)
        for neighbour in graph[node]:
            dfs(visited, graph, neighbour)

# Driver Code
print("Following is the Depth-First Search")
dfs(visited, graph, 'S')