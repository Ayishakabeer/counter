redux is used to avoid props drilling
-createReducer() : used to create reducers where we can store updated State inside store
         -createAction() : used to ceate action where we can define logic to updated state, output of action 
         automatically return to its reducer.
         -createSlice(): used to combine action and reducer in a single file.It return action and reducer, it accepts initial
         slice,
            steps to create slice for react app
                -create js file for defining slice 
                -create Slice method call where we have to define reducers as objects, its key act as action and its value 
                    act as reducer function, it has minimum one argument which gives slice state