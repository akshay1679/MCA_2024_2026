## How does React Work?

React creates a VIRTUAL DOM in memory.
Instead of manipulating the browser's DOM directly, React creates a virtual DOM in memory, where it does all the necessary manipulating, before making the changes in the browser DOM.
React only changes what needs to be changed!

## Setting up a React Environment

```react
npx create-react-app my-react-app
```

## Run the React Application

```
cd my-react-app
npm start
```



```jsx
function App() {
  return (
    <div className="App">
      <h1>Hello World!</h1>
    </div>
  );
}

export default App;
```

## Upgrade to React 18

