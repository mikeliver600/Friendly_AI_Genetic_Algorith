public enum BehaviorState
{
    Exploring,
    Hunting,
    Resting,
    Escaping
}

public class FriendlyAI : MonoBehaviour
{
    private BehaviorState currentBehaviorState;

    // ... existing code ...

    private void Update()
    {
        // Update the inputs for the neural network
        // ...

        switch (currentBehaviorState)
        {
            case BehaviorState.Exploring:
                // Implement actions and decision-making processes for exploring state
                // ...
                break;
            case BehaviorState.Hunting:
                // Implement actions and decision-making processes for hunting state
                // ...
                break;
            case BehaviorState.Resting:
                // Implement actions and decision-making processes for resting state
                // ...
                break;
            case BehaviorState.Escaping:
                // Implement actions and decision-making processes for escaping state
                // ...
                break;
        }

        // ...
    }
}
