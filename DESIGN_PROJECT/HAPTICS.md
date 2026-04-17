# Haptics
The focus of this research is the study of haptics in the tactile, sound and visual domains. 

It also aims to understand the synergy between those 3 - how a same haptic information can be translated between those 3 senses.

Ultimately, it looks to understand how mixing different haptic informations can lead to the creation of new hybrid reality, where the broken logic between what we feel, hear and see makes us able to understand their antagonism as a new material.

## Texture translation Vibration - Sound - brightness

### 1. Brightness as Magnitude (DC Component)
In Fourier transforms, brightness directly corresponds to the magnitude of the lowest frequency component (the DC component)Ç

- **High Brightness (White - 1):** High amplitude in the DC component.
- **Low Brightness (Black - 0):** Low amplitude in the DC component.
- **Contrast:** Differences in brightness between adjacent pixels map to higher frequency components, representing edges or fine details.
- **Image Frequency Calculation:** Frequency represents the rate of change of intensity per pixel. If a transition from black to white takes fewer pixels, it is a higher frequency.

### 2. Translating Brightness to Sound Frequency (Sonification)
If translating an image into sound (converting brightness to a pitch), the mapping usually follows this pattern: 

- **High Brightness:** Higher frequency (pitch).
- **Low Brightness:** Lower frequency (pitch).

### 3. Spatial Frequency Interpretation
- **Low Frequency:** Represents smooth, slow-changing areas of an image, which typically correspond to large, similarly bright, or shaded areas.
- **High Frequency:** Represents fast-changing, high-contrast areas (e.g., white text on a black background), which correspond to sharp edges, details, and rapid brightness transitions.