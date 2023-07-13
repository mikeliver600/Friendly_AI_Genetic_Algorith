public class FriendlyAI : MonoBehaviour
{
    // Genetic traits
    public bool hasTraitA;
    public bool hasTraitB;

    // ... existing code ...

    // Method for reproducing and passing genetic traits to offspring
    private void Reproduce()
    {
        // Clone the neural network
        NeuralNetwork offspringNeuralNetwork = neuralNetwork.Clone();

        // Mutate the offspring's neural network
        offspringNeuralNetwork.Mutate(mutationRate);

        // Inherit genetic traits
        FriendlyAI offspringAIComponent = offspringAI.GetComponent<FriendlyAI>();
        offspringAIComponent.hasTraitA = hasTraitA;
        offspringAIComponent.hasTraitB = hasTraitB;

        // ...
    }

    // ... existing code ...
}
