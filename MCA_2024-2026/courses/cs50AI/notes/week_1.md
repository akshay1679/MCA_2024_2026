## <u>Knowledge</u>

**Knowledge-Based Agents**  --> These are agents that reason by operating on internal representations of knowledge.

**Sentence** --> A sentence is an assertion about the world in a knowledge representation language. A sentence is how AI stores knowledge and uses it to infer new information.

## <u>Propositional Logic</u>

Propositional logic is based on propositions, statements about the world that can be either true or false

**Logical Connectives** --> Logical connectives are logical symbols that connect propositional symbols in order to reason in a more complex way about the world.

### **<u>Not (¬)</u>**   Truth table

| P   | false |
| --- | ----- |
| ¬P  | true  |

---

### **<u>And (∧)</u>**   Truth table

| P     | Q     | P ∧ Q |
| ----- | ----- | ----- |
| false | false | false |
| false | true  | false |
| true  | false | false |
| true  | true  | true  |

---

### **<u>Or (∨)</u>**    Truth table

| P     | Q     | Or (∨) |
| ----- | ----- | ------ |
| false | false | false  |
| false | true  | true   |
| true  | false | true   |
| true  | true  | true   |

Two types of Or: an inclusive Or and an exclusive Or.

| **Inclusive OR (Logical OR, ∨)**                                              | **Exclusive OR (XOR, ⊕)**                                                                                                                   |
| ----------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------- |
| **Definition**: The result is `true` if at least one of the inputs is `true`. | **Definition**: The result is `true` if exactly one of the inputs is `true`, but not both.                                                  |
|                                                                               | **Key Point**: It excludes the case where both inputs are `true`.                                                                           |
|                                                                               | **Example**:<br><br>- If you say, "You can either have tea or coffee, but not both," using exclusive OR, you must choose one, but not both. |


|A|B|A ∨ B (Inclusive OR)|
|---|---|---|
|False|False|False|
|False|True|True|
|True|False|True|
|True|True|True|

| A     | B     | A ⊕ B (Exclusive OR) |
| ----- | ----- | -------------------- |
| False | False | False                |
| False | True  | True                 |
| True  | False | True                 |
| True  | True  | False                |

---

### **<u>Implication (→)</u>**  -->  ==if== P ==then== Q  

| P     | Q     | P → Q |
| ----- | ----- | ----- |
| false | false | true  |
| false | true  | true  |
| true  | false | false |
| true  | true  | true  |

---

### **<u>Biconditional ↔</u>**   --> ==if and only if.==


| p   | q   | p<-->q |
| ----- | ----- | ----- |
| false | false | true  |
| false | true  | false |
| true  | false | false |
| true  | true  | true  |

###  **<u>Model</u>**

The model is an assignment of a truth value to every proposition.

For example, if P: “It is raining.” and Q: “It is Tuesday.”, a model could be the following truth-value assignment: {P = True, Q = False}

### **<u>Knowledge Base (KB)</u>**

The knowledge base is a ==set of sentences known by a knowledge-based agent==. This is knowledge that the AI is provided about the world in the form of propositional logic sentences that can be used to make additional inferences about the world.



### **<u>Entailment (⊨)</u>**

If α ⊨ β (α entails β), then in any world where ==α is true, β is true,== too.

---
---
## **<u>Inference</u>


Inference is the process of deriving new sentences from old ones.



| P     | Q     | R     | KB  |
| ----- | ----- | ----- | --- |
| false | false | false |     |
| false | false | true  |     |
| false | true  | false |     |
| false | true  | true  |     |
| true  | false | false |     |
| true  | false | true  |     |
| true  | true  | false |     |
| true  | true  | true  |     |
First, in our KB, we know that P is true. Thus, we can say that the KB is false in all models where P is not true.




| P         | Q     | R     | KB    |
| --------- | ----- | ----- | ----- |
| ==false== | false | false | false |
| ==false== | false | true  | false |
| ==false== | true  | false | false |
| ==false== | true  | true  | false |
| true      | false | false |       |
| true      | false | true  |       |
| true      | true  | false |       |
| true      | true  | true  |       |
Next, similarly, in our KB, we know that Q is false. Thus, we can say that the KB is false in all models where Q is true.




| P     | Q     | R        | KB    |
| ----- | ----- | -------- | ----- |
| false | false | false    | false |
| false | false | true     | false |
| false | true  | false    | false |
| false | true  | true     | false |
| true  | false | false    |       |
| true  | false | ==true== | false |
| true  | true  | false    |       |
| true  | true  | ==true== | false |


```python

from logic import *

# Create new classes, each having a name, or a symbol, representing each proposition.
rain = Symbol("rain")  # It is raining.
hagrid = Symbol("hagrid")  # Harry visited Hagrid
dumbledore = Symbol("dumbledore")  # Harry visited Dumbledore

# Save sentences into the KB
knowledge = And(  # Starting from the "And" logical connective, becasue each proposition represents knowledge that we know to be true.

    Implication(Not(rain), hagrid),  # ¬(It is raining) → (Harry visited Hagrid)

    Or(hagrid, dumbledore),  # (Harry visited Hagrid) ∨ (Harry visited Dumbledore).

    Not(And(hagrid, dumbledore)),  # ¬(Harry visited Hagrid ∧ Harry visited Dumbledore) i.e. Harry did not visit both Hagrid and Dumbledore.

    dumbledore  # Harry visited Dumbledore. Note that while previous propositions contained multiple symbols with connectors, this is a proposition consisting of one symbol. This means that we take as a fact that, in this KB, Harry visited Dumbledore.
    )
```




---
### **<u>Logic python module</u>**

https://docs.sympy.org/latest/modules/logic.html


<iframe   width="400"
  height="300" src="https://docs.sympy.org/latest/modules/logic.html"></iframe>
  


### <u>logic.py in cs50 ai full code</u> 


https://github.com/Rajil1213/cs50AI/blob/master/Week1/knights/logic.py

```python
import itertools


class Sentence():

    def evaluate(self, model):
        """Evaluates the logical sentence."""
        raise Exception("nothing to evaluate")

    def formula(self):
        """Returns string formula representing logical sentence."""
        return ""

    def symbols(self):
        """Returns a set of all symbols in the logical sentence."""
        return set()

    @classmethod
    def validate(cls, sentence):
        if not isinstance(sentence, Sentence):
            raise TypeError("must be a logical sentence")

    @classmethod
    def parenthesize(cls, s):
        """Parenthesizes an expression if not already parenthesized."""
        def balanced(s):
            """Checks if a string has balanced parentheses."""
            count = 0
            for c in s:
                if c == "(":
                    count += 1
                elif c == ")":
                    if count <= 0:
                        return False
                    count -= 1
            return count == 0
        if not len(s) or s.isalpha() or (
            s[0] == "(" and s[-1] == ")" and balanced(s[1:-1])
        ):
            return s
        else:
            return f"({s})"


class Symbol(Sentence):

    def __init__(self, name):
        self.name = name

    def __eq__(self, other):
        return isinstance(other, Symbol) and self.name == other.name

    def __hash__(self):
        return hash(("symbol", self.name))

    def __repr__(self):
        return self.name

    def evaluate(self, model):
        try:
            return bool(model[self.name])
        except KeyError:
            raise Exception(f"variable {self.name} not in model")

    def formula(self):
        return self.name

    def symbols(self):
        return {self.name}


class Not(Sentence):
    def __init__(self, operand):
        Sentence.validate(operand)
        self.operand = operand

    def __eq__(self, other):
        return isinstance(other, Not) and self.operand == other.operand

    def __hash__(self):
        return hash(("not", hash(self.operand)))

    def __repr__(self):
        return f"Not({self.operand})"

    def evaluate(self, model):
        return not self.operand.evaluate(model)

    def formula(self):
        return "¬" + Sentence.parenthesize(self.operand.formula())

    def symbols(self):
        return self.operand.symbols()


class And(Sentence):
    def __init__(self, *conjuncts):
        for conjunct in conjuncts:
            Sentence.validate(conjunct)
        self.conjuncts = list(conjuncts)

    def __eq__(self, other):
        return isinstance(other, And) and self.conjuncts == other.conjuncts

    def __hash__(self):
        return hash(
            ("and", tuple(hash(conjunct) for conjunct in self.conjuncts))
        )

    def __repr__(self):
        conjunctions = ", ".join(
            [str(conjunct) for conjunct in self.conjuncts]
        )
        return f"And({conjunctions})"

    def add(self, conjunct):
        Sentence.validate(conjunct)
        self.conjuncts.append(conjunct)

    def evaluate(self, model):
        return all(conjunct.evaluate(model) for conjunct in self.conjuncts)

    def formula(self):
        if len(self.conjuncts) == 1:
            return self.conjuncts[0].formula()
        return " ∧ ".join([Sentence.parenthesize(conjunct.formula())
                           for conjunct in self.conjuncts])

    def symbols(self):
        return set.union(*[conjunct.symbols() for conjunct in self.conjuncts])


class Or(Sentence):
    def __init__(self, *disjuncts):
        for disjunct in disjuncts:
            Sentence.validate(disjunct)
        self.disjuncts = list(disjuncts)

    def __eq__(self, other):
        return isinstance(other, Or) and self.disjuncts == other.disjuncts

    def __hash__(self):
        return hash(
            ("or", tuple(hash(disjunct) for disjunct in self.disjuncts))
        )

    def __repr__(self):
        disjuncts = ", ".join([str(disjunct) for disjunct in self.disjuncts])
        return f"Or({disjuncts})"

    def evaluate(self, model):
        return any(disjunct.evaluate(model) for disjunct in self.disjuncts)

    def formula(self):
        if len(self.disjuncts) == 1:
            return self.disjuncts[0].formula()
        return " ∨  ".join([Sentence.parenthesize(disjunct.formula())
                            for disjunct in self.disjuncts])

    def symbols(self):
        return set.union(*[disjunct.symbols() for disjunct in self.disjuncts])


class Implication(Sentence):
    def __init__(self, antecedent, consequent):
        Sentence.validate(antecedent)
        Sentence.validate(consequent)
        self.antecedent = antecedent
        self.consequent = consequent

    def __eq__(self, other):
        return (isinstance(other, Implication)
                and self.antecedent == other.antecedent
                and self.consequent == other.consequent)

    def __hash__(self):
        return hash(("implies", hash(self.antecedent), hash(self.consequent)))

    def __repr__(self):
        return f"Implication({self.antecedent}, {self.consequent})"

    def evaluate(self, model):
        return ((not self.antecedent.evaluate(model))
                or self.consequent.evaluate(model))

    def formula(self):
        antecedent = Sentence.parenthesize(self.antecedent.formula())
        consequent = Sentence.parenthesize(self.consequent.formula())
        return f"{antecedent} => {consequent}"

    def symbols(self):
        return set.union(self.antecedent.symbols(), self.consequent.symbols())


class Biconditional(Sentence):
    def __init__(self, left, right):
        Sentence.validate(left)
        Sentence.validate(right)
        self.left = left
        self.right = right

    def __eq__(self, other):
        return (isinstance(other, Biconditional)
                and self.left == other.left
                and self.right == other.right)

    def __hash__(self):
        return hash(("biconditional", hash(self.left), hash(self.right)))

    def __repr__(self):
        return f"Biconditional({self.left}, {self.right})"

    def evaluate(self, model):
        return ((self.left.evaluate(model)
                 and self.right.evaluate(model))
                or (not self.left.evaluate(model)
                    and not self.right.evaluate(model)))

    def formula(self):
        left = Sentence.parenthesize(str(self.left))
        right = Sentence.parenthesize(str(self.right))
        return f"{left} <=> {right}"

    def symbols(self):
        return set.union(self.left.symbols(), self.right.symbols())


def model_check(knowledge, query):
    """Checks if knowledge base entails query."""

    def check_all(knowledge, query, symbols, model):
        """Checks if knowledge base entails query, given a particular model."""

        # If model has an assignment for each symbol
        if not symbols:

            # If knowledge base is true in model, then query must also be true
            if knowledge.evaluate(model):
                return query.evaluate(model)
            return True
        else:

            # Choose one of the remaining unused symbols
            remaining = symbols.copy()
            p = remaining.pop()

            # Create a model where the symbol is true
            model_true = model.copy()
            model_true[p] = True

            # Create a model where the symbol is false
            model_false = model.copy()
            model_false[p] = False

            # Ensure entailment holds in both models
            return (check_all(knowledge, query, remaining, model_true) and
                    check_all(knowledge, query, remaining, model_false))

    # Get all symbols in both knowledge and query
    symbols = set.union(knowledge.symbols(), query.symbols())

    # Check that knowledge entails query
    return check_all(knowledge, query, symbols, dict())
```



