#pragma once
#include <map>
#include <string>

std::map<std::string, std::string> items = {
        {"1", "Foundations"},
        {"1-1", "Past, Present, and Future"},
        {"1-1-1", "The Origins of Neuroscience"},
        {"1-1-1-1", "Views of the Brain in Ancient Greece"},
        {"1-1-1-2", "Views of the Brain during the Roman Empire"},
        {"1-1-1-3", "Views of the Brain from the Renaissance to the Nineteenth-Centry"},
        {"1-1-1-4", "Nineteenth-Centry Views of the Brain"},
        {"1-1-1-4-1", "Nerves as Wires"},
        {"1-1-1-4-2", "Localization of Specific Functions to Different Parts of the Brain"},
        {"1-1-1-4-3", "The Evolution of Nervous Systems"},
        {"1-1-1-4-4", "The Neuron: The Basic Functional Unit of the Brain"},
        {"1-1-2", "Neuroscience Today"},
        {"1-1-2-1", "Levels of Analysis"},
        {"1-1-2-1-1", "Molecular Neuroscience"},
        {"1-1-2-1-2", "Cellular Neuroscience"},
        {"1-1-2-1-3", "Systems Neuroscience"},
        {"1-1-2-1-4", "Behavioral Neuroscience"},
        {"1-1-2-1-5", "Cognitive Neuroscience"},
        {"1-1-2-2", "Neuroscientists"},
        {"1-1-2-3", "The Scientific Process"},
        {"1-1-2-3-1", "Observation"},
        {"1-1-2-3-2", "Replication"},
        {"1-1-2-3-3", "Interpretation"},
        {"1-1-2-3-4", "Verification"},
        {"1-1-2-4", "The Use of Animals in Neuroscience Research"},
        {"1-1-2-4-1", "The Animals"},
        {"1-1-2-4-2", "Animal Welfare"},
        {"1-1-2-4-3", "Animal Rights"},
        {"1-1-2-5", "The Cost of Ignorance: Nervous System Disorders"},
        {"1-2", "Neurons and Glia"},
        {"1-2-1", "The Neuron Doctrine"},
        {"1-2-1-1", "The Golgi Stain"},
        {"1-2-1-2", "Cajal's Contribution"},
        {"1-2-2", "The Prototypical Neuron"},
        {"1-2-2-1", "The Soma"},
        {"1-2-2-1-1", "The Nucleus"},
        {"1-2-2-1-2", "Neuronal Genes, Genetic Variation, and Genetic Engineering"},
        {"1-2-2-1-3", "Rough Endoplasmic Reticulum"},
        {"1-2-2-1-4", "Smooth Endoplasmic Reticulum and the Golgi Apparatus"},
        {"1-2-2-1-5", "The Mitochondrion"},
        {"1-2-2-2", "The Neuronal Membrane"},
        {"1-2-2-3", "The Cytoskeleton"},
        {"1-2-2-3-1", "Microtubules"},
        {"1-2-2-3-2", "Microfilaments"},
        {"1-2-2-3-3", "Neurofilaments"},
        {"1-2-2-4", "The Axon"},
        {"1-2-2-4-1", "The Axon Terminal"},
        {"1-2-2-4-2", "The Synapse"},
        {"1-2-2-4-3", "Axoplasmic Transport"},
        {"1-2-2-5", "Dendrites"},
        {"1-2-3", "Classifying Neurons"},
        {"1-2-3-1", "Classification based on Neuronal Structure"},
        {"1-2-3-1-1", "Number of Neurites"},
        {"1-2-3-1-2", "Dendrites"},
        {"1-2-3-1-3", "Connections"},
        {"1-2-3-1-4", "Axon Length"},
        {"1-2-3-2", "Classification based on Gene Expression"},
        {"1-2-4", "Glia"}, 
        {"1-2-4-1", "Astrocytes"},
        {"1-2-4-2", "Myelinated Glia"},
        {"1-2-4-3", "Other Non-Neuronal Cells"},
        {"1-3", "The Neuronal Membrane at Rest"},
        {"1-3-1", "The Cast of Chemicals"},
        {"1-3-1-1", "Cytosol and Extracellular Fluid"},
        {"1-3-1-1-1", "Water"},
        {"1-3-1-1-2", "Ions"},
        {"1-3-1-2", "The Phospholipid Membrane"},
        {"1-3-1-3", "Protein"},
        {"1-3-1-3-1", "Protein Structure"},
        {"1-3-1-3-2", "Channel Proteins"},
        {"1-3-1-3-3", "Ion Pumps"},
        {"1-3-2", "The Movement of Ions"},
        {"1-3-2-1", "Diffusion"},
        {"1-3-2-2", "Electricity"},
        {"1-3-3", "The Ionic Basis of the Resting Membrane Potential"},
        {"1-3-3-1", "Equilibrium Potentials"},
        {"1-3-3-2", "The Distribution of Ions across the Membrane"},
        {"1-3-3-3", "Relative Ion Permeabilities of the Membrane at Rest"},
        {"1-3-3-3-1", "The Wide World of Potassium Channels"},
        {"1-3-3-3-2", "The Importance of Regulating the External Potassium Concentration"},
        {"1-4", "The Action Potential"},
        {"1-4-1", "Properties of the Action Potential"},
        {"1-4-1-1", "The Ups and Downs of an Action Potential"},
        {"1-4-1-2", "The Generation of an Action Potential"},
        {"1-4-1-3", "The Generation of Multiple Action Potentials"},
        {"1-4-1-3-1", "Optogenetics: Controlling Neural Activity with Light"},
        {"1-4-2", "The Action Potential in Theory"},
        {"1-4-2-1", "Membrane Currents and Conductances"},
        {"1-4-2-2", "The Ins and Outs of an Action Potential"},
        {"1-4-3", "The Action Potential in Reality"},
        {"1-4-3-1", "The Voltage-Gated Sodium Channel"},
        {"1-4-3-1-1", "Sodium Channel Structure"},
        {"1-4-3-1-2", "Functional Properties of the Sodium Channel"},
        {"1-4-3-1-3", "The Effects of Toxins on the Sodium Channel"},
        {"1-4-3-2", "Voltage-Gated Potassium Channels"},
        {"1-4-3-3", "Putting the Pieces Together"},
        {"1-4-4", "Action Potential Conduction"},
        {"1-4-4-1", "Factors Influencing Conduction Velocity"},
        {"1-4-4-2", "Myelin and Saltatory Conduction"},
        {"1-4-5", "Action Potentials, Axons, and Dendrites"},
        {"1-5", "Synaptic Transmission"},
        {"1-5-1", "Types of Synapses"},
        {"1-5-1-1", "Electrical Synapses"},
        {"1-5-1-2", "Chemical Synapses"},
        { "1-5-1-2-1", "CNS Chemical Synapses" },
        { "1-5-1-2-2", "The Neuromuscular Junction" },
        {"1-5-2", "Principles of Chemical Synaptic Transmission"},
        {"1-5-2-1", "Neurotransmitters"},
        {"1-5-2-2", "Neurotransmitter Synthesis and Storage"},
        {"1-5-2-3", "Neurotransmitter Release"},
        {"1-5-2-4", "Neurotransmitter Receptors and Effectors"},
        { "1-5-2-4-1", "Transmitter-Gated Ion Channels" },
        { "1-5-2-4-2", "G-Protein-Coupled Receptors" },
        { "1-5-2-4-3", "Autoreceptors" },
        {"1-5-2-5", "Neurotransmitter Recovery and Degradation"},
        {"1-5-2-6", "Neuropharmacology"},
        {"1-5-3", "Principles of Synaptic Integration"},
        {"1-5-3-1", "The Integration of EPSPs"},
        { "1-5-3-1-1", "Quantal Analysis of EPSPs" },
        { "1-5-3-1-2", "EPSP Summation" },
        {"1-5-3-2", "The Contribution of Dendritic Properties to Synaptic Integration"},
        { "1-5-3-2-1", "Dendritic Cable Properties" },
        { "1-5-3-2-2", "Excitable Dendrites" },
        {"1-5-3-3", "Inhibition"},
        { "1-5-3-3-1", "IPSPs and Shunting Inhibition" },
        { "1-5-3-3-2", "The Geometry of Excitatory and Inhibitory Synapses" },
        {"1-5-3-4", "Modulation"},
        {"1-6", "Neurotransmitter Systems"},
        {"1-6-1", "Studying Neurotransmitter Systems"},
        {"1-6-1-1", "Localization of Transmitters and Transmitter-Synthesizing Enzymes"},
        {"1-6-1-2", "Studying Transmitter Release"},
        {"1-6-1-3", "Studying Synaptic Mimicry"},
        {"1-6-1-4", "Studying Receptors"},
        {"1-6-2", "Neurotransmitter Chemistry"},
        {"1-6-2-1", "Cholinergic Neurons"},
        {"1-6-2-2", "Catecholaminergic Neurons"},
        {"1-6-2-3", "Serotonergic Neurons"},
        {"1-6-2-3", "Amino Acidergic Neurons"},
        {"1-6-2-4", "Other Neurotransmitter Candidates and Intercellular Messengers"},
        {"1-6-3", "Transmitter-Gated Channels"},
        {"1-6-3-1", "The Basic Structure of Transmitter-Gated Channels"},
        {"1-6-3-2", "Amino Acid-Gated Channels"},
        {"1-6-4", "G-Protein-Coupled Receptors and Effectors"},
        {"1-6-4-1", "The Basic Structure of G-Protein-Coupled Receptors"},
        {"1-6-4-2", "The Ubiquitous G-Protein"},
        {"1-6-4-3", "G-Protein-Coupled Effector Systems"},
        {"1-6-5", "Divergence and Convergence in Neurotransmitter Systems"},
        {"1-7", "The Structure of the Nervous System"},
        {"1-7-1", "Gross Organization of the Mammalian Nervous System"},
        {"1-7-1-1", "Anatomical References"},
        {"1-7-1-2", "The Central Nervous System"},
        {"1-7-1-3", "The Peripheral Nervous System"},
        {"1-7-1-4", "The Cranial Nerves"},
        {"1-7-1-5", "The Meninges"},
        {"1-7-1-6", "The Ventricular System"},
        {"1-7-1-7", "The Views of the Brain"},
        {"1-7-2", "Understanding CNS Structure through Development"},
        { "1-7-2-1", "Formation of the Neural Tube" },
        { "1-7-2-2", "Three Primary Brain Vesicles" },
        { "1-7-2-3", "Differentiation of the Forebrain" },
        { "1-7-2-4", "Differentiation of the Midbrain" },
        { "1-7-2-5", "Differentiation of the Hindbrain" },
        { "1-7-2-6", "Differentiation of the Spinal Cord" },
        { "1-7-2-7", "Putting the Pieces Together" },
        { "1-7-2-8", "Special Features of the Human CNS" },
        { "1-7-3", "A Guide to the Cerebral Cortex" },
        { "1-7-3-1", "Types of Cerebral Cortex" },
        { "1-7-3-2", "Areas of Neocortex" },
        { "2", "Sensory and Motor Systems" },
        { "2-1", "The Chemical Senses" },
        { "2-1-1", "Taste" },
        { "2-1-1-1", "The Basic Tastes" },
        { "2-1-1-2", "The Organs of Taste" },
        { "2-1-1-3", "Taste Receptor Cells" },
        { "2-1-1-4", "Mechanisms of Taste Transduction" },
        { "2-1-1-5", "Central Taste Pathways" },
        { "2-1-1-6", "The Neural Coding of Taste" },
        { "2-1-2", "Smell" },
        { "2-1-2-1", "The Organs of Smell" },
        { "2-1-2-2", "Olfactory Receptor Neurons" },
        { "2-1-2-3", "Central Olfactory Pathways" },
        { "2-1-2-4", "Spatial and Temporal Representations of Olfactory Information" },
        { "2-2", "The Eye" },
        { "2-2-1", "Properties of Light" },
        { "2-2-1-1", "Light" },
        { "2-2-1-2", "Optics" },
        { "2-2-2", "The Structure of the Eye" },
        { "2-2-2-1", "Gross Anatomy of the Eye" },
        { "2-2-2-2", "Ophthalmoscopic Appearance of the Eye" },
        { "2-2-2-3", "Corss-Sectional Anatomy of the Eye" },
        { "2-2-3", "Image Formation by the Eye" },
        { "2-2-3-1", "Refraction by the Cornea" },
        { "2-2-3-2", "Accommodation by the Lens" },
        { "2-2-3-3", "The Pulillary Light Reflex" },
        { "2-2-3-4", "The Visual Field" },
        { "2-2-3-5", "Visual Acuity" },
        { "2-2-4", "Microscopic Anatomy of the Retina" },
        { "2-2-4-1", "The Laminar Organizaiton of the Retina" },
        { "2-2-4-2", "Photoreceptor Structure" },
        { "2-2-4-3", "Regional Differences in Retinal Structure and their Visual Consequences" },
        { "2-2-5", "Phototransduction" },
        { "2-2-5-1", "Phototransduction in Rods" },
        { "2-2-5-2", "Phototransduction in Cones" },
        { "2-2-5-3", "Dark and Light Adaptation" },
        { "2-2-6", "Retinal Processing and Output" },
        { "2-2-6-1", "The Receptive Field" },
        { "2-2-6-2", "Bipolar Cell Receptive Fields" },
        { "2-2-6-3", "Ganglion Cell Photoreceptors" },
        { "2-2-6-4", "Parallel Processing" },
        { "2-3", "The Central Visual System" },
        { "2-3-1", "The Retinofugal Projection" },
        { "2-3-1-1", "The Optic Nerve, Optic Chiasm, and Optic Tract" },
        { "2-3-1-2", "Right and Left Visual Hemifields" },
        { "2-3-1-3", "Targets of the Optic Tract" },
        { "2-3-2", "Anatomy of the Striate Cortex" },
        { "2-3-2-1", "Retinotopy" },
        { "2-3-2-2", "Lamination of the Striate Cortex" },
        { "2-3-2-3", "Inputs and Oputs of the Striate Cortex" },
        { "2-3-2-4", "Cytochrome Oxidase Blobs" },
        { "2-3-3", "Physiology of the Striate Cortex" },
        { "2-3-3-1", "Receptive Fields" },
        { "2-3-3-2", "Parallel Pathways and Cortical Modules" },
        { "2-3-4", "Beyond the Striate Cortex" },
        { "2-3-4-1", "The Dorsal Stream" },
        { "2-3-4-2", "The Ventral Stream" },
        { "2-3-5", "From Single Neurons to Perception" },
        { "2-3-5-1", "Receptive Field Hierarchy and Perception" },
        { "2-3-5-2", "Parallel Processing and Perception" },
        { "2-4", "The Auditory and Vestibular Systems" },
        { "2-4-1", "The Nature of Sound" },
        { "2-4-2", "The Structure of the Auditory System" },
        { "2-4-3", "The Middle Ear" },
        { "2-4-3-1", "Components of the Middle Ear" },
        { "2-4-3-2", "Sound Force Amplification by the Ossicles" },
        { "2-4-3-3", "The Attenuation Reflex" },
        { "2-4-4", "The Inner Ear" },
        { "2-4-4-1", "Anatory of the Cochlea" },
        { "2-4-4-2", "Physiology of the Cochlea" },
        { "2-4-5", "Central Auditory Processes" },
        { "2-4-5-1", "The Anatomy of Auditory Pathways" },
        { "2-4-5-2", "Reponse Properties of Neurons in the Auditory Pahtways" },
        { "2-4-6", "Encoding Sound Intensity and Frequency" },
        { "2-4-6-1", "Stimulus Intensity" },
        { "2-4-6-2", "Stimulus Frequency, Tonotopy, and Phase Locking" },
        { "2-4-7", "Mechanisms of Sound Localization" },
        { "2-4-7-1", "Localization of Sound in the Horizontal Plane" },
        { "2-4-7-2", "Localization of Sound in the Vertical Plane" },
        { "2-4-8", "Auditory Cortex" },
        { "2-4-8-1", "Neuronal Response Properties" },
        { "2-4-8-2", "The Effects for Auditory Cortical Lesions and Ablation" },
        { "2-4-9", "The Vestibular System" },
        { "2-4-9-1", "The Vestibular Labyrinth" },
        { "2-4-9-2", "The Otolith Organs" },
        { "2-4-9-3", "The Semicircular Canals" },
        { "2-4-9-4", "Central Vestibular Pathways and Vestibular Reflexes" },
        { "2-4-9-5", "Vestibular Pathology" },
        { "2-5", "The Somatic Sensory System" },
        { "2-5-1", "Touch" },
        { "2-5-1-1", "Mechanoreceptors of the Skin" },
        { "2-5-1-2", "Primary Afferent Axons" },
        { "2-5-1-3", "The Spinal Cord" },
        { "2-5-1-4", "The Dorsal Column-Medial Lemniscal Pathway" },
        { "2-5-1-5", "The Trigeminal Touch Pathway" },
        { "2-5-1-6", "Somatosensory Cortex" },
        { "2-5-2", "Pain" },
        { "2-5-2-1", "Nociceptors and the Transduction of Painful Stimuli" },
        { "2-5-2-2", "Itch" },
        { "2-5-2-3", "Primary Afferents and Spinal Mechanisms" },
        { "2-5-2-4", "Ascending Pain Pathways" },
        { "2-5-2-5", "The Regulation of Pain" },
        { "2-5-3", "Temperature" },
        { "2-5-3-1", "Thermoreceptors" },
        { "2-5-3-2", "The Temperature Pathway" },
        { "2-6", "Spinal Control of Movement" },
        { "2-6-1", "The Somatic Motor System" },
        { "2-6-2", "The Lower Motor Neuron" },
        { "2-6-2-1", "The Segmental Organization of Lower Motor Neurons" },
        { "2-6-2-2", "Alpha Motor Neurons" },
        { "2-6-2-3", "Types of Motor Units" },
        { "2-6-3", "Excitation-Contraction Coupling" },
        { "2-6-3-1", "Muscle Fiber Structure" },
        { "2-6-3-2", "The Molecular Basis of Muscle Contraction" },
        { "2-6-4", "Spinal Control of Motor Units" },
        { "2-6-4-1", "Proprioception from Muscle Spindles" },
        { "2-6-4-2", "Gamma Motor Neurons" },
        { "2-6-4-3", "Proprioception from Golgi Tendon Organs" },
        { "2-6-4-4", "Spinal Interneurons" },
        { "2-6-4-5", "The Generation of Spinal Motor Programs for Walking" },
        { "2-7", "Brain Control of Movement" },
        { "2-7-1", "Descending Spinal Tracts" },
        { "2-7-1-1", "The Lateral Pathways" },
        { "2-7-1-2", "The Ventromedial Pathways" },
        { "2-7-2", "The Planning of Movement by the Cerebral Cortex" },
        { "2-7-2-1", "Motor Cortex" },
        { "2-7-2-2", "The Contributions of Posterior Parietal and Prefrontal Cortex" },
        { "2-7-2-3", "Neuronal Correlates of Motor Planning" },
        { "2-7-2-4", "Mirror Neurons" },
        { "2-7-3", "The Basal Ganglia" },
        { "2-7-3-1", "Anatomy of the Basal Ganglia" },
        { "2-7-3-2", "Direct and Indirect Pathways through the Basal Ganglia" },
        { "2-7-4", "The Initiation of Movement by Primary Motor Cortex" },
        { "2-7-4-1", "The Input-Output Organization of M1" },
        { "2-7-4-2", "The Coding of Movement in M1" },
        { "2-7-5", "The Cerebellum" },
        { "2-7-5-1", "Anatomy of the Cerebellum" },
        { "2-7-5-2", "The Motor Loop through the Lateral Cerebellum" },
        { "3", "The Brain and Behavior" },
        { "3-1", "Chemical Control of the Brain and Behavior" },
        { "3-1-1", "The Secretory Hypothalamus" },
        { "3-1-1-1", "An Overview of the Hypothalamus" },
        { "3-1-1-2", "Pathways to the Pituitary" },
        { "3-1-2", "The Autonomic Nervous System" },
        { "3-1-2-1", "ANS Circuits" },
        { "3-1-2-2", "Neurotransmitters and the Pharmacology of Autonomic Function" },
        { "3-1-3", "The Diffuses Modulatory Systems of the Brain" },
        { "3-1-3-1", "Anatomy and Functions of the Diffuse Modulatory Systems" },
        { "3-1-3-2", "Drugs and the Diffuse Modulatory Systems" },
        { "3-2", "Motivation" },
        { "3-2-1", "The Hypothalamus, Homeostasis, and Motivated Behavior" },
        { "3-2-2", "The Long-Term Regulation of Fedding Behavior" },
        { "3-2-2-1", "Energy Balance" },
        { "3-2-2-2", "Hormonal and Hypothalamic Regulationn of Body Fat and Feeding" },
        { "3-2-3", "The Short-Term Regulation of Fedding Bahavior" },
        { "3-2-3-1", "Appetite, Eating, Digestion, and Satiety" },
        { "3-2-4", "Why do We Eat?" },
        { "3-2-4-1", "Reinforcement and Reward" },
        { "3-2-4-2", "The Role of Dopamine in Motivation" },
        { "3-2-4-3", "Serotonin, Food, and Mood" },
        { "3-2-5", "Other Motivated Behaviors" },
        { "3-2-5-1", "Drinking" },
        { "3-2-5-2", "Temperature Regulation" },
        { "3-3", "Sex and the Brain" },
        { "3-3-1", "Sex and Gender" },
        { "3-3-1-1", "The Genetics of Sex" },
        { "3-3-1-2", "Sexual Development and Differentiation" },
        { "3-3-2", "The Hormonal Control of Sex" },
        { "3-3-2-1", "The Principal Male and Female Hormones" },
        { "3-3-2-2", "The Control of Sex Hormones by the Pituitary and Hypothalamus" },
        { "3-3-3", "The Neural Basis of Sexual Behaviors" },
        { "3-3-3-1", "Reproductive Organs and Their Control" },
        { "3-3-3-2", "Mammalian Mating Strategies" },
        { "3-3-3-3", "The Neurochemistry of Reproductive Behavior" },
        { "3-3-3-3", "Love, Bonding, and the Human Brain" },
        { "3-3-4", "Why and How Male and Female Brains Differ" },
        { "3-3-4-1", "Sexual Dimorphisms of the Central Nervous System" },
        { "3-3-4-2", "Sexual Dimorphisms of Cognition" },
        { "3-3-4-3", "Sex Hormones, the Brain, and Behavior" },
        { "3-3-4-4", "Direct Genetic Effects on Behavior and Sexual Differentiation of the Brain" },
        { "3-3-4-5", "The Activational Effects of Sex Hormones" },
        { "3-3-4-6", "Sexual Orientation" },
        { "3-4", "Brain Mechanisms of Emotion" },
        { "3-4-1", "Early Theories of Emotion" },
        { "3-4-1-1", "The James-Lange Theory" },
        { "3-4-1-2", "The Cannon-Bard Theory" },
        { "3-4-1-3", "Implications of Unconscious Emotion" },
        { "3-4-2", "The Limbic System" },
        { "3-4-2-1", "Broca's Limbic Lobe" },
        { "3-4-2-2", "The Papez Circuit" },
        { "3-4-2-3", "Difficulties with the Concept of a Single System for Emotions" },
        { "3-4-3", "Emotion Theories and Neural Representations" },
        { "3-4-3-1", "Basic Emotion Theories" },
        { "3-4-3-2", "Dimensional Emotion Theories" },
        { "3-4-3-3", "What is an Emotion?" },
        { "3-4-4", "Fear and the Amygdala" },
        { "3-4-4-1", "The Kluver-Bucy Syndrome" },
        { "3-4-4-2", "Anatomy of the Amygdala" },
        { "3-4-4-3", "Effect of Amygdala Stimulation and Lesions" },
        { "3-4-4-4", "A Neural Circuit for Learned Fear" },
        { "3-4-5", "Anger and Aggression" },
        { "3-4-5-1", "The Amygdala and Aggression" },
        { "3-4-5-2", "Neural Components of Anger and Aggression beyond the Amydala" },
        { "3-4-5-3", "Serotonergic Regulation of Anger and Aggression" },
        { "3-5", "Brain Rhythms and Sleep" },
        { "3-5-1", "The Electroencephalogram" },
        { "3-5-1-1", "Recording Brain Waves" },
        { "3-5-1-2", "EEG Rhythms" },
        { "3-5-1-3", "Mechanisms and Meanings of Brain Rhythms" },
        { "3-5-1-4", "The Seizures of Epilepsy" },
        { "3-5-2", "Sleep" },
        { "3-5-2-1", "The Functional States of the Brain" },
        { "3-5-2-2", "The Sleep Cycle" },
        { "3-5-2-3", "Why do We Sleep?" },
        { "3-5-2-4", "Functions of Dreaming and REM Sleep" },
        { "3-5-2-5", "Neural Mechanisms of Sleep" },
        { "3-5-3", "Circadian Rhythms" },
        { "3-5-3-1", "Biological Clocks" },
        { "3-5-3-2", "The Suprachiasmatic Nucleus: A Brain Clock" },
        { "3-5-3-3", "SCN Mechanisms" },
        { "3-6", "Language" },
        { "3-6-1", "What is Language?" },
        { "3-6-1-1", "Human Sound and Speech Production" },
        { "3-6-1-2", "Language in Animals" },
        { "3-6-1-3", "Language Acquisition" },
        { "3-6-1-4", "Genes Involved in Language" },
        { "3-6-2", "The Discovery of Specialized Language Areas in the Brain" },
        { "3-6-2-1", "Broca's Area and Wernicke's Area" },
        { "3-6-3", "Language Insights from the Study of Aphasia" },
        { "3-6-3-1", "Broca's Aphasia" },
        { "3-6-3-2", "Wernicke's Aphasia" },
        { "3-6-3-3", "The Wernicke-Geschwind Model of Language and Aphasia" },
        { "3-6-3-4", "Conduction Aphasia" },
        { "3-6-3-5", "Aphasia in Bilinguals and Deaf People" },
        { "3-6-4", "Asymmetrical Language Processing in the Two" },
        { "3-6-5", "Cerebral Hemispheres" },
        { "3-6-5-1", "Language Processing in Split-Brain Humans" },
        { "3-6-5-2", "Anatomical Asymmetry and Language" },
        { "3-6-6", "Language Studies using Brain Stimulation and Human" },
        { "3-6-7", "Brain Imaging" },
        { "3-6-7-1", "The Effects of Brain Stimulation on Language" },
        { "3-6-7-2", "Imaging of Language Processing in the Human Brain" },
        { "3-7", "The Resting Brain, Attention, and Consciousness" },
        { "3-7-1", "Resting State Brain Activity" },
        { "3-7-1-1", "The Brain's Default Mode Network" },
        { "3-7-2", "Attention" },
        { "3-7-2-1", "Behavioral Consequences of Attention" },
        { "3-7-2-2", "Physiological Effects of Attention" },
        { "3-7-2-3", "Brain Circuits for the Control of Attention" },
        { "3-7-3", "Consciousness" },
        { "3-7-3-1", "What is Consciousness?" },
        { "3-7-3-2", "Neural Correlates of Consciousness" },
        { "3-8", "Mental Illness" },
        { "3-8-1", "Mental Illness and the Brain" },
        { "3-8-1-1", "Psychosocial Approaches to Mental Illness" },
        { "3-8-1-2", "Biological Approaches to Mental Illness" },
        { "3-8-2", "Anxiety Disorders" },
        { "3-8-2-1", "A Description of Anxiety Disorders" },
        { "3-8-2-2", "Other Disorders Characterized by Increased Anxiety" },
        { "3-8-2-3", "Biological Bases of Anxiety Disorders" },
        { "3-8-2-4", "Treatments for Anxiety Disorders" },
        { "3-8-3", "Affective Disorders" },
        { "3-8-3-1", "A Description of Affective Disorders" },
        { "3-8-3-2", "Biological Bases of Affective Disorders" },
        { "3-8-3-3", "Treatments for Affective Disorders" },
        { "3-8-4", "Schizophrenia" },
        { "3-8-4-1", "A Description of Schizophrenia" },
        { "3-8-4-2", "Biological Bases of Schizophrenia" },
        { "3-8-4-3", "Treatments for Schizophrenia" },
        { "4", "The Changing Brain" },
        { "4-1", "Wiring the Brain" },
        { "4-1-1", "The Genesis of Neurons" },
        { "4-1-1-1", "Cell Proliferation" },
        { "4-1-1-2", "Cell Migration" },
        { "4-1-1-3", "Cell Differentiation" },
        { "4-1-1-4", "Differentiation of Cortical Areas" },
        { "4-1-2", "The Genesis of Connections" },
        { "4-1-2-1", "The Growing Axon" },
        { "4-1-2-2", "Axon Guidance" },
        { "4-1-2-3", "Synapse Formation" },
        { "4-1-3", "The Elimination of Cells and Synapses" },
        { "4-1-3-1", "Cell Death" },
        { "4-1-3-2", "Changes in Synaptic Capacity" },
        { "4-1-4", "Activity-Dependent Synaptic Rearrangement" },
        { "4-1-4-1", "Synaptic Segregation" },
        { "4-1-4-2", "Synaptic Convergence" },
        { "4-1-4-3", "Synaptic Competition" },
        { "4-1-4-4", "Modulatory Influences" },
        { "4-1-5", "Elementary Mechanisms of Cortical Synaptic Plasticity" },
        { "4-1-5-1", "Excitatory Synaptic Transmission in the Immature Visual System" },
        { "4-1-5-2", "Long-Term Synaptic Potentiation" },
        { "4-1-5-3", "Long-Term Synaptic Depression" },
        { "4-1-6", "Why Cortical Periods End" },
        { "4-2", "Memory Systems" },
        { "4-2-1", "Types of Memory and Amnesia" },
        { "4-2-1-1", "Declarative and Nondeclarative Memory" },
        { "4-2-1-2", "Types of Procedural Memory" },
        { "4-2-1-3", "Types of Declarative Memory" },
        { "4-2-1-4", "Amnesia" },
        { "4-2-2", "Working Memory" },
        { "4-2-2-1", "The Prefrontal Cortex and Working Memory" },
        { "4-2-2-2", "Area LIP and Working Memory" },
        { "4-2-3", "Declarative Memory" },
        { "4-2-3-1", "The Neocortex and Declarative Memory" },
        { "4-2-3-2", "Studies Implicating the Medial Temporal Lobes" },
        { "4-2-3-3", "Temporal Lobe Amnesia" },
        { "4-2-3-4", "Memory Functions of the Hippocampal System" },
        { "4-2-3-5", "Consolidating Memories and Retaining Engrams" },
        { "4-2-4", "Procedural Memory" },
        { "4-2-4-1", "The Striatum and Procedural Memory in Rodents" },
        { "4-2-4-2", "Habit Learning in Humans and Nonhuman Primates" },
        { "4-3", "Molecular Mechanisms of Learning and Memory" },
        { "4-3-1", "Memory Aquisition" },
        { "4-3-1-1", "Cellular Reports of Memory Formation" },
        { "4-3-1-2", "Strengthening Synapses" },
        { "4-3-1-3", "Weakening Synapses" },
        { "4-3-1-4", "LTP, LTD, and Memory" },
        { "4-3-1-5", "Synaptic Homeostasis" },
        { "4-3-2", "Memory Consolidation" },
        { "4-3-2-1", "Persistently Active Protein Kinases" },
        { "4-3-2-2", "Protein Synthesis and Memory Consolidation" },
};

std::map<std::string, std::string> currentItems = {};