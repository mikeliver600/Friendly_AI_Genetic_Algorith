public class FriendlyAI : MonoBehaviour
{
    // ... existing code ...

    public float lifespan = 100f;                // Lifespan of the AI
    public float healthDecreaseRate = 0.01f;     // Rate at which health decreases with age
    public float energyDecreaseRate = 0.01f;     // Rate at which energy decreases with age

    private void Update()
    {
        // Update the inputs for the neural network
        // ...

        // Aging effects
        if (age >= lifespan)
        {
            // Deactivate or destroy the AI
            gameObject.SetActive(false); // Deactivate the AI
            // Destroy(gameObject);      // Destroy the AI
        }
        else
        {
            // Decrease health and energy based on age
            health -= healthDecreaseRate * Time.deltaTime;
            energy -= energyDecreaseRate * Time.deltaTime;

            // Regenerate health and energy
            RegenerateHealth();
            RegenerateEnergy();
        }

        // ...
    }

    // ... existing code ...
}
