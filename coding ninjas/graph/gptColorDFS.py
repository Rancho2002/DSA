class Graph:
    def __init__(self, num_vertices):
        self.num_vertices = num_vertices
        self.adj_matrix = [[0] * num_vertices for _ in range(num_vertices)]
        self.time = 0

    def add_edge(self, u, v):
        self.adj_matrix[u][v] = 1
        self.adj_matrix[v][u] = 1

    def dfs(self):
        visited = [False] * self.num_vertices
        discovery_time = [-1] * self.num_vertices
        finish_time = [-1] * self.num_vertices
        visited_vertices = []

        for vertex in range(self.num_vertices):
            if not visited[vertex]:
                self.time = 0  # Reset the time variable for each new component
                self.__dfs_helper(vertex, visited, discovery_time, finish_time, visited_vertices)

        # Print the discovery and finishing times in the order of visited vertices
        for vertex in visited_vertices:
            print(f"Vertex {vertex}: Discovery Time = {discovery_time[vertex]}, Finish Time = {finish_time[vertex]}")

    def __dfs_helper(self, vertex, visited, discovery_time, finish_time, visited_vertices):
        visited[vertex] = True
        self.time += 1
        discovery_time[vertex] = self.time

        for v in range(self.num_vertices):
            if not visited[v] and self.adj_matrix[vertex][v] == 1:
                self.__dfs_helper(v, visited, discovery_time, finish_time, visited_vertices)

        self.time += 1
        finish_time[vertex] = self.time

        visited_vertices.append(vertex)  # Add the visited vertex to the list


graph = Graph(5)  # Create a graph with 5 vertices

# Add edges to the graph
graph.add_edge(0, 1)
graph.add_edge(0, 2)
graph.add_edge(1, 3)
graph.add_edge(2, 4)

# Perform DFS traversal
graph.dfs()
