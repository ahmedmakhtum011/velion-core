# Graph Report - .  (2026-04-28)

## Corpus Check
- Corpus is ~168 words - fits in a single context window. You may not need a graph.

## Summary
- 9 nodes · 9 edges · 2 communities detected
- Extraction: 67% EXTRACTED · 33% INFERRED · 0% AMBIGUOUS · INFERRED: 3 edges (avg confidence: 0.9)
- Token cost: 0 input · 0 output

## Community Hubs (Navigation)
- [[_COMMUNITY_Project Concept & Vision|Project Concept & Vision]]
- [[_COMMUNITY_C++ Implementation|C++ Implementation]]

## God Nodes (most connected - your core abstractions)
1. `Hybrid AI accelerated physics simulation engine` - 4 edges
2. `arr_input()` - 3 edges
3. `main()` - 3 edges
4. `Veilion-core` - 1 edges
5. `Rigid body dynamics` - 1 edges
6. `Soft body dynamics` - 1 edges
7. `Fluid body dynamics` - 1 edges

## Surprising Connections (you probably didn't know these)
- None detected - all connections are within the same source files.

## Hyperedges (group relationships)
- **Physics Dynamics Suite** — readme_rigid_body_dynamics, readme_soft_body_dynamics, readme_fluid_body_dynamics [INFERRED 0.90]

## Communities

### Community 0 - "Project Concept & Vision"
Cohesion: 0.4
Nodes (5): Fluid body dynamics, Hybrid AI accelerated physics simulation engine, Rigid body dynamics, Soft body dynamics, Veilion-core

### Community 1 - "C++ Implementation"
Cohesion: 0.83
Nodes (2): arr_input(), main()

## Knowledge Gaps
- **4 isolated node(s):** `Veilion-core`, `Rigid body dynamics`, `Soft body dynamics`, `Fluid body dynamics`
  These have ≤1 connection - possible missing edges or undocumented components.
- **Thin community `C++ Implementation`** (4 nodes): `initial.cpp`, `initial.cpp`, `arr_input()`, `main()`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.

## Suggested Questions
_Questions this graph is uniquely positioned to answer:_

- **Are the 3 inferred relationships involving `Hybrid AI accelerated physics simulation engine` (e.g. with `Rigid body dynamics` and `Soft body dynamics`) actually correct?**
  _`Hybrid AI accelerated physics simulation engine` has 3 INFERRED edges - model-reasoned connections that need verification._
- **What connects `Veilion-core`, `Rigid body dynamics`, `Soft body dynamics` to the rest of the system?**
  _4 weakly-connected nodes found - possible documentation gaps or missing edges._