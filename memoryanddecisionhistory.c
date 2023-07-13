public class FriendlyAI : MonoBehaviour
{
    // ... existing code ...

    private List<Decision> decisionHistory;

    private void Update()
    {
        // Update the inputs for the neural network
        // ...

        // Make a decision using the neural network

        // Store the decision in the decision history

        // Perform actions based on the network's outputs

        // ...
    }

    // ... existing code ...
}

public struct Decision
{
    public float[] inputs;
    public float[] outputs;
    public bool isSuccess;
}
