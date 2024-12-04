import os
from graphviz import Digraph

# Get the directory of the current script
script_dir = os.path.dirname(os.path.abspath(__file__))
flowchart_filepath = os.path.join(script_dir, "flowchart")

# Initialize the flowchart
flowchart = Digraph(format="png", comment="Flowchart")

# Add nodes for the flowchart steps
flowchart.node("Start", "Start", shape="oval")
flowchart.node("Init1", "size = 5", shape="rectangle")
flowchart.node("Init2", "i = 0; j = 0", shape="rectangle")
flowchart.node("OuterLoop", "i < size?", shape="diamond")
flowchart.node("InnerLoop", "j < size?", shape="diamond")
flowchart.node("Cond1", "(i == 0 OR i == size - 1) AND \n(j == 0 OR j == 1 OR j == size - 2 OR j == size - 1)?", shape="diamond")
flowchart.node("Cond1_True", "Print(1)", shape="rectangle")
flowchart.node("Cond2", "j == 2?", shape="diamond")
flowchart.node("Cond2_True", "Print(*)", shape="rectangle")
flowchart.node("Cond3", "i == 2?", shape="diamond")
flowchart.node("Cond3_True", "Print(*)", shape="rectangle")
flowchart.node("Cond4", "(i == 1 OR i == size - 2) AND \n(j == 0 OR j == size - 1)?", shape="diamond")
flowchart.node("Cond4_True", "Print(1)", shape="rectangle")
flowchart.node("Cond5", "i == 1 OR i == size - 2?", shape="diamond")
flowchart.node("Cond5_True", "Print(*)", shape="rectangle")
flowchart.node("Default", "Print(*)", shape="rectangle")
flowchart.node("IncrementJ", "j = j + 1", shape="rectangle")
flowchart.node("NewLine", "Print() (move to new line)", shape="rectangle")
flowchart.node("IncrementI", "i = i + 1", shape="rectangle")
flowchart.node("End", "End", shape="oval")

# Add edges to connect the nodes
flowchart.edge("Start", "Init1")
flowchart.edge("Init1", "Init2")
flowchart.edge("Init2", "OuterLoop")
flowchart.edge("OuterLoop", "InnerLoop", label="Yes")
flowchart.edge("OuterLoop", "End", label="No")
flowchart.edge("InnerLoop", "Cond1", label="Yes")
flowchart.edge("InnerLoop", "IncrementI", label="No")
flowchart.edge("Cond1", "Cond1_True", label="Yes")
flowchart.edge("Cond1_True", "IncrementJ")
flowchart.edge("Cond1", "Cond2", label="No")
flowchart.edge("Cond2", "Cond2_True", label="Yes")
flowchart.edge("Cond2_True", "IncrementJ")
flowchart.edge("Cond2", "Cond3", label="No")
flowchart.edge("Cond3", "Cond3_True", label="Yes")
flowchart.edge("Cond3_True", "IncrementJ")
flowchart.edge("Cond3", "Cond4", label="No")
flowchart.edge("Cond4", "Cond4_True", label="Yes")
flowchart.edge("Cond4_True", "IncrementJ")
flowchart.edge("Cond4", "Cond5", label="No")
flowchart.edge("Cond5", "Cond5_True", label="Yes")
flowchart.edge("Cond5_True", "IncrementJ")
flowchart.edge("Cond5", "Default", label="No")
flowchart.edge("Default", "IncrementJ")
flowchart.edge("IncrementJ", "InnerLoop")
flowchart.edge("InnerLoop", "NewLine", label="No")
flowchart.edge("NewLine", "IncrementI")
flowchart.edge("IncrementI", "OuterLoop")

# Render the flowchart to a file in the same directory
flowchart.render(flowchart_filepath)
print(f"Flowchart saved to: {flowchart_filepath}.png")
