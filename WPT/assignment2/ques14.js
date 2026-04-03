const initialState = [];

function reducer(state = initialState, action) {
  switch(action.type) {
    case "ADD_CLOCK":
      return [...state, action.payload];
    case "REMOVE_CLOCK":
      return state.filter((c,i)=> i !== action.index);
    default:
      return state;
  }
}