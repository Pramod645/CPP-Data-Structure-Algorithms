# Optimization Techniques
1. Parallel Algorithms
This algorithmic model to encompass parallel algorithms, where multiple instructions can execute simultaneously.  elegant model can be xplored for task-parallel algorithms, which are amenable to algorithmic design and analysis. here ocuses on fork-join parallel algorithms,the most basic and best understood kind of task-parallel algorithm. Fork-join parallel algorithms can be expressed cleanly using simple linguistic extensions to ordinary serial code. Moreover, they can be implemented efficiently in practice.

2. Online Algorithms
An online algorithm receives its input progressively over time, rather than having the entire input available at the start, as in an ofüine algorithm. Online algorithms pertain to many situations in which information arrives gradually.
There are several approaches for dealing with unknown future inputs. One approach is to form a probabilistic model of future inputs and design an algorithm that assumes future inputs conform to the model. it is also related to machine learning.Instead of assuming anything about the future input, employ a conservative strategy of limiting how poor a solution any input can entail.
Adopts a worst-case approach, designing online algorithms that guarantee the quality of the solution for all possible future inputs.analyze online algorithms by comparing the solution produced by the online algorithm with a solution produced by an optimal algorithm that knows the future inputs, and taking a worst-case ratio over all possible instances. We call this methodology competitive analysis. 
3. Matrix Operations
LUP decomposition
4. Linear Programming 
Many problems take the form of maximizing or minimizing an objective, given limited resources and competing constraints. If can specify the objective as a linear function of certain variables, and if can specify the constraints on resources as equalities or inequalities on those variables, then you have a linear programming problem. 
5. Ploynomials and the FFT
The straightforward method of adding two polynomials of degree n takes O(n) time, but the straightforward method of multiplying them takes O(n square) time.
The most common use for Fourier transforms, and hence the FFT, is in signal processing. A signal is given in the time domain: as a function mapping time to amplitude. Fourier analysis expresses the signal as a weighted sum of phase shifted sinusoids of varying frequencies. The weights and phases associated with the frequencies characterize the signal in the frequency domain. Among the many everyday applications of FFT’s are compression techniques used to encode digital video and audio information, including MP3 files.

6. Number-Theoretic Algorithms
Number theory was once viewed as a beautiful but largely useless subject in pure mathematics. Today number-theoretic algorithms are used widely, due in large part to the invention of cryptographic schemes based on large prime numbers. These schemes are feasible because we can find large primes quickly , and they are secure because we do not know how to factor the product of large primes 
7. String Matching
Text-editing programs frequently need to find all occurrences of a pattern in the text. Typically, the text is a document being edited, and the pattern searched for is a particular word supplied by the user. Efficient algorithms for this problem  called string matching can greatly aid the responsiveness of the text-editing program. Among their many other applications, string-matching algorithms search for particular patterns in DNA sequences. Internet search engines also use them to find web pages relevant to queries.
1.Naive 2.RAbin-Karp 3.Finite automation 4.Knuth-Morris-Pratt 5.Suffix array
8. MLA
9. NP-Completeness
polynomial and non-polynomial
10. Approximation Algorithms
Many problems of practical significance are NP-complete, yet they are too important to abandon merely because nobody knows how to find an optimal solution in polynomial time. Even if a problem is NP-complete, there may be hope. You have at least three options to get around NP-completeness. First, if the actual inputs are small, an algorithm with exponential running time might be fast enough. Second, you might be able to isolate important special cases that you can solve in polynomial time. Third, you can try to devise an approach to find a near-optimal solution in polynomial time (either in the worst case or the expected case). In practice, near optimality is often good enough. We call an algorithm that returns near-optimal solutions an approximation algorithm.
