public class FriendlyAI : MonoBehaviour
{
    // ... existing code ...

    private bool isInjured;
    private float movementSpeedDecreaseRate = 0.2f; // Rate at which movement speed decreases when injured

    private void Update()
    {
        // Update the inputs for the neural network
        // ...

        if (isInjured)
        {
            // Decrease movement speed when injured
            DecreaseMovementSpeed();
        }
        else
        {
            // Normal movement
            // ...
        }

        // ...
    }

    // Method to inflict an injury on the AI
    public void InflictInjury()
    {
        isInjured = true;
        // Adjust AI behavior or abilities based on the injury
    }

    // Method to heal the AI
    public void Heal()
    {
        isInjured = false;
        // Restore AI behavior or abilities
    }

    // Method to decrease movement speed when injured
    private void DecreaseMovementSpeed()
    {
        // Decrease the AI's movement speed
        // ...
    }

    // ... existing code ...
}
