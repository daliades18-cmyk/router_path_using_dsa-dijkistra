# Router Path Using DSA (Dijkstra Algorithm)

## Project Overview

Router Path Using DSA is a web-based visualization project that simulates how internet packets travel between routers using graph algorithms.

This project was developed as a first-year Data Structures and Algorithms (DSA) mini project to understand:
- Graphs
- Shortest Path Algorithms
- Dijkstra Algorithm
- Networking Basics
- Visualization using Web Technologies

The project visually demonstrates how routers communicate and how packets choose the shortest route from source to destination.

---

# Technologies Used

## Frontend
- HTML
- CSS
- JavaScript

## Visualization
- HTML Canvas API

## DSA Concepts
- Graph Data Structure
- Dijkstra Algorithm
- Weighted Graphs
- Traversal Logic

---

# Data Structure Used

## Graph

The complete network is represented using a graph.

In this project:
- Routers are treated as vertices (nodes)
- Connections are treated as edges

Each edge contains a weight which represents network distance or cost.

---

# Weighted Graph Representation

The project uses weighted edges because routing decisions depend on distance between routers.

The edge weight is calculated dynamically using the distance formula between routers on screen.

Distance formula used:


::contentReference[oaicite:0]{index=0}


This weight becomes the routing cost between two routers.

---

# Dijkstra Algorithm

The main DSA concept used in this project is Dijkstra Shortest Path Algorithm.

The algorithm finds the shortest path between:
- source router
- destination router

It works efficiently on weighted graphs.

---

# How Dijkstra Works In This Project

The algorithm maintains:
- distance array
- visited nodes
- previous node tracking

Initially:
- source node distance = 0
- all other distances = Infinity

The algorithm repeatedly selects the nearest unvisited router and updates neighboring router distances.

Shortest path update logic:

:contentReference[oaicite:1]{index=1}

Where:
- d(v) = current shortest distance
- d(u) = distance of current node
- w(u,v) = edge weight

---

# DSA Implementation

## Nodes
Routers are stored as objects containing:
- x coordinate
- y coordinate
- router id
- router state

---

## Edges
Connections store:
- source router
- destination router
- weight

---

## Pathfinding
Dijkstra algorithm calculates:
- shortest route
- alternative route during failures

---

## Traversal
Neighbor routers are explored through graph traversal logic.

---

# Visualization Logic

The project uses HTML Canvas API to visualize:
- routers
- network connections
- packet movement
- failed routers

Packets move dynamically along the shortest calculated path.

Visualization improves understanding of:
- graph traversal
- shortest path selection
- routing behavior

---

# Router Failure Handling

The project includes failed router simulation.

When a router fails:
- it becomes inactive
- Dijkstra ignores that node
- alternative route is calculated

This simulates real-world network rerouting systems.

---

# Time Complexity

Current implementation uses array sorting during pathfinding.

Time complexity:

:contentReference[oaicite:2]{index=2}

Where:
- V = number of vertices

---

# Applications

Concepts used in this project are used in:
- Internet routing
- GPS systems
- Network communication
- Traffic routing
- Delivery systems

---

# Learning Outcomes

Through this project I learned:
- Graph implementation
- Weighted graph traversal
- Dijkstra Algorithm
- Visualization techniques
- Canvas rendering
- Simulation logic
- Event handling in JavaScript

---

# Future Improvements

Possible future improvements:
- Min Heap optimization
- Packet congestion simulation
- Dynamic routing updates
- Packet loss simulation
- Real-time traffic balancing

---

# Conclusion

Router Path Using DSA is a visualization-based DSA project that demonstrates shortest path routing using Dijkstra Algorithm.

The project combines:
- Data Structures
- Algorithms
- Networking Concepts
- Web Visualization

to create an interactive and educational simulation system.
