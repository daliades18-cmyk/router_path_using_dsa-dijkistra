# Router Path Using Dijkstra Algorithm

## Overview

Router Path Using Dijkstra Algorithm is a web-based visualization project that simulates how packets travel between routers in a network using graph algorithms.

The project was created to understand:
- Graph data structures
- Dijkstra shortest path algorithm
- Networking basics
- Visualization using HTML Canvas

The simulation shows how routers communicate and how the shortest route is selected between source and destination routers.

---

# Steps to Run the Project

## Step 1
Open Visual Studio Code.

## Step 2
Create a new folder for the project.

Example:
router_path_project

## Step 3
Inside the folder, create these files:

- index.html
- style.css
- script.js

## Step 4
Copy the HTML code into:
index.html

Copy the CSS code into:
style.css

Copy the JavaScript code into:
script.js

## Step 5
Open index.html in a browser.

OR

Use VS Code Live Server extension.

Right click on:
index.html

Select:
Open with Live Server

---

# Technologies Used

## HTML
Used for creating the webpage structure.

## CSS
Used for styling routers, buttons, and layout.

## JavaScript
Used for:
- Graph logic
- Dijkstra algorithm
- Animation
- Packet movement
- Canvas rendering

## HTML Canvas API
Used for:
- Drawing routers
- Drawing network connections
- Visualizing packet movement

---

# Data Structure Used

## Graph

The network is represented using a graph.

In this project:
- Routers are vertices (nodes)
- Connections are edges

Each connection has a weight representing routing cost or distance.

---

# Dijkstra Algorithm

The main algorithm used is Dijkstra Shortest Path Algorithm.

The algorithm calculates the shortest path between:
- source router
- destination router

It works on weighted graphs and finds the minimum distance route.

---

# How the Program Works

## Router Creation

Routers are created as nodes with:
- x position
- y position
- router id

These routers are displayed visually on the screen.

---

## Edge Creation

Connections are created between routers.

Each connection contains:
- source router
- destination router
- distance weight

The weight represents routing cost.

---

## Pathfinding

When source and destination routers are selected:
- Dijkstra algorithm starts
- shortest distance is calculated
- best route is selected

The final path is highlighted visually.

---

## Packet Movement

The project simulates packet transfer.

Packets move:
- from source router
- through intermediate routers
- to destination router

This helps visualize routing behavior.

---

# Router Failure Handling

The project includes router failure simulation.

When a router fails:
- the router becomes inactive
- Dijkstra ignores the failed router
- an alternative route is calculated

This simulates real-world network rerouting.

---

# Concepts Used

This project uses:
- Graphs
- Weighted graphs
- Arrays
- Objects
- Loops
- Conditions
- Shortest path algorithms
- Canvas visualization

---

# Applications

The concepts used in this project are used in:
- Internet routing
- GPS navigation
- Network communication
- Traffic systems
- Delivery routing systems

---

# Learning Outcomes

From this project, I learned:
- Graph implementation
- Dijkstra Algorithm
- Pathfinding logic
- Network simulation
- Canvas rendering
- JavaScript event handling
- Visualization techniques

---

# Future Improvements

Possible future improvements:
- Min heap optimization
- Traffic congestion simulation
- Packet loss simulation
- Dynamic routing updates
- Real-time network visualization

---

# Conclusion

Router Path Using Dijkstra Algorithm is a network simulation project that demonstrates shortest path routing using graph algorithms and visualization techniques.

The project combines:
- Data Structures
- Algorithms
- Networking Concepts
- Web Visualization

to create an interactive routing simulation system.
