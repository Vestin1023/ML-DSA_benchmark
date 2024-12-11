#include <benchmark/benchmark.h>

static void BM_SampleFunction(benchmark::State& state) {
    for (auto _ : state) {
        int x = 42 * 42;  // Example computation
        benchmark::DoNotOptimize(x);
    }
}
BENCHMARK(BM_SampleFunction);

BENCHMARK_MAIN();
