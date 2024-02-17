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

visited = [] 
queue = []    

def bfs(visited, graph, node): #function for BFS
  visited.append(node)
  queue.append(node)

  while queue:          # Creating loop to visit each node
    m = queue.pop(0) 
    print (m, end = " ") 

    for neighbour in graph[m]:
      if neighbour not in visited:
        visited.append(neighbour)
        queue.append(neighbour)

# Driver Code
print("Following is the Breadth-First Search")
bfs(visited, graph, 'S')    # function calling