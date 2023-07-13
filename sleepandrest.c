public class FriendlyAI : MonoBehaviour
{
    // Sleep and rest variables
    private bool isSleeping;
    private bool isResting;
    private float sleepRegenerationRate = 0.2f; // Rate at which health and energy regenerate during sleep
    private float restRegenerationRate = 0.1f;  // Rate at which health and energy regenerate during rest

    // ... existing code ...

    private void Update()
    {
        // Update the inputs for the neural network
        // ...

        // Check sleep and rest periods for accelerated regeneration
        if (isSleeping)
        {
            RegenerateHealth(sleepRegenerationRate);
            RegenerateEnergy(sleepRegenerationRate);
        }
        else if (isResting)
        {
            RegenerateHealth(restRegenerationRate);
            RegenerateEnergy(restRegenerationRate);
        }
        else
        {
            // Regenerate health and energy at regular rates
            RegenerateHealth();
            RegenerateEnergy();
        }

        // ...
    }

    // ... existing code ...

    // Method to initiate sleep
    public void Sleep()
    {
        isSleeping = true;
        isResting = false;
    }

    // Method to initiate rest
    public void Rest()
    {
        isSleeping = false;
        isResting = true;
    }

    // Method to wake up
    public void WakeUp()
    {
        isSleeping = false;
        isResting = false;
    }

    // ... existing code ...
}
