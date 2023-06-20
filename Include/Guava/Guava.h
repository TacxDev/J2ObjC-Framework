//
// Guava.h
//

#include <com/google/common/annotations/Beta.h>
#include <com/google/common/annotations/GwtCompatible.h>
#include <com/google/common/annotations/GwtIncompatible.h>
#include <com/google/common/annotations/VisibleForTesting.h>
#include <com/google/common/annotations/package-info.h>
#include <com/google/common/base/Absent.h>
#include <com/google/common/base/AbstractIterator.h>
#include <com/google/common/base/Ascii.h>
#include <com/google/common/base/CaseFormat.h>
#include <com/google/common/base/CharMatcher.h>
#include <com/google/common/base/Charsets.h>
#include <com/google/common/base/CommonMatcher.h>
#include <com/google/common/base/CommonPattern.h>
#include <com/google/common/base/Converter.h>
#include <com/google/common/base/Defaults.h>
#include <com/google/common/base/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/base/Enums.h>
#include <com/google/common/base/Equivalence.h>
#include <com/google/common/base/ExtraObjectsMethodsForWeb.h>
#include <com/google/common/base/FinalizablePhantomReference.h>
#include <com/google/common/base/FinalizableReference.h>
#include <com/google/common/base/FinalizableReferenceQueue.h>
#include <com/google/common/base/FinalizableSoftReference.h>
#include <com/google/common/base/FinalizableWeakReference.h>
#include <com/google/common/base/Function.h>
#include <com/google/common/base/FunctionalEquivalence.h>
#include <com/google/common/base/Functions.h>
#include <com/google/common/base/JdkPattern.h>
#include <com/google/common/base/Joiner.h>
#include <com/google/common/base/MoreObjects.h>
#include <com/google/common/base/NullnessCasts.h>
#include <com/google/common/base/Objects.h>
#include <com/google/common/base/Optional.h>
#include <com/google/common/base/PairwiseEquivalence.h>
#include <com/google/common/base/ParametricNullness.h>
#include <com/google/common/base/PatternCompiler.h>
#include <com/google/common/base/Platform.h>
#include <com/google/common/base/Preconditions.h>
#include <com/google/common/base/Predicate.h>
#include <com/google/common/base/Predicates.h>
#include <com/google/common/base/Present.h>
#include <com/google/common/base/SmallCharMatcher.h>
#include <com/google/common/base/Splitter.h>
#include <com/google/common/base/StandardSystemProperty.h>
#include <com/google/common/base/Stopwatch.h>
#include <com/google/common/base/Strings.h>
#include <com/google/common/base/Supplier.h>
#include <com/google/common/base/Suppliers.h>
#include <com/google/common/base/Throwables.h>
#include <com/google/common/base/Ticker.h>
#include <com/google/common/base/Utf8.h>
#include <com/google/common/base/Verify.h>
#include <com/google/common/base/VerifyException.h>
#include <com/google/common/base/internal/Finalizer.h>
#include <com/google/common/base/package-info.h>
#include <com/google/common/cache/AbstractCache.h>
#include <com/google/common/cache/AbstractLoadingCache.h>
#include <com/google/common/cache/Cache.h>
#include <com/google/common/cache/CacheBuilder.h>
#include <com/google/common/cache/CacheBuilderSpec.h>
#include <com/google/common/cache/CacheLoader.h>
#include <com/google/common/cache/CacheStats.h>
#include <com/google/common/cache/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/cache/ForwardingCache.h>
#include <com/google/common/cache/ForwardingLoadingCache.h>
#include <com/google/common/cache/LoadingCache.h>
#include <com/google/common/cache/LocalCache.h>
#include <com/google/common/cache/LongAddable.h>
#include <com/google/common/cache/LongAddables.h>
#include <com/google/common/cache/LongAdder.h>
#include <com/google/common/cache/ParametricNullness.h>
#include <com/google/common/cache/ReferenceEntry.h>
#include <com/google/common/cache/RemovalCause.h>
#include <com/google/common/cache/RemovalListener.h>
#include <com/google/common/cache/RemovalListeners.h>
#include <com/google/common/cache/RemovalNotification.h>
#include <com/google/common/cache/Striped64.h>
#include <com/google/common/cache/Weigher.h>
#include <com/google/common/cache/package-info.h>
#include <com/google/common/collect/AbstractBiMap.h>
#include <com/google/common/collect/AbstractIndexedListIterator.h>
#include <com/google/common/collect/AbstractIterator.h>
#include <com/google/common/collect/AbstractListMultimap.h>
#include <com/google/common/collect/AbstractMapBasedMultimap.h>
#include <com/google/common/collect/AbstractMapBasedMultiset.h>
#include <com/google/common/collect/AbstractMapEntry.h>
#include <com/google/common/collect/AbstractMultimap.h>
#include <com/google/common/collect/AbstractMultiset.h>
#include <com/google/common/collect/AbstractNavigableMap.h>
#include <com/google/common/collect/AbstractRangeSet.h>
#include <com/google/common/collect/AbstractSequentialIterator.h>
#include <com/google/common/collect/AbstractSetMultimap.h>
#include <com/google/common/collect/AbstractSortedKeySortedSetMultimap.h>
#include <com/google/common/collect/AbstractSortedMultiset.h>
#include <com/google/common/collect/AbstractSortedSetMultimap.h>
#include <com/google/common/collect/AbstractTable.h>
#include <com/google/common/collect/AllEqualOrdering.h>
#include <com/google/common/collect/ArrayListMultimap.h>
#include <com/google/common/collect/ArrayListMultimapGwtSerializationDependencies.h>
#include <com/google/common/collect/ArrayTable.h>
#include <com/google/common/collect/BaseImmutableMultimap.h>
#include <com/google/common/collect/BiMap.h>
#include <com/google/common/collect/BoundType.h>
#include <com/google/common/collect/ByFunctionOrdering.h>
#include <com/google/common/collect/CartesianList.h>
#include <com/google/common/collect/ClassToInstanceMap.h>
#include <com/google/common/collect/CollectCollectors.h>
#include <com/google/common/collect/CollectPreconditions.h>
#include <com/google/common/collect/CollectSpliterators.h>
#include <com/google/common/collect/Collections2.h>
#include <com/google/common/collect/CompactHashMap.h>
#include <com/google/common/collect/CompactHashSet.h>
#include <com/google/common/collect/CompactHashing.h>
#include <com/google/common/collect/CompactLinkedHashMap.h>
#include <com/google/common/collect/CompactLinkedHashSet.h>
#include <com/google/common/collect/ComparatorOrdering.h>
#include <com/google/common/collect/Comparators.h>
#include <com/google/common/collect/ComparisonChain.h>
#include <com/google/common/collect/CompoundOrdering.h>
#include <com/google/common/collect/ComputationException.h>
#include <com/google/common/collect/ConcurrentHashMultiset.h>
#include <com/google/common/collect/ConsumingQueueIterator.h>
#include <com/google/common/collect/ContiguousSet.h>
#include <com/google/common/collect/Count.h>
#include <com/google/common/collect/Cut.h>
#include <com/google/common/collect/DenseImmutableTable.h>
#include <com/google/common/collect/DescendingImmutableSortedMultiset.h>
#include <com/google/common/collect/DescendingImmutableSortedSet.h>
#include <com/google/common/collect/DescendingMultiset.h>
#include <com/google/common/collect/DiscreteDomain.h>
#include <com/google/common/collect/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/collect/EmptyContiguousSet.h>
#include <com/google/common/collect/EmptyImmutableListMultimap.h>
#include <com/google/common/collect/EmptyImmutableSetMultimap.h>
#include <com/google/common/collect/EnumBiMap.h>
#include <com/google/common/collect/EnumHashBiMap.h>
#include <com/google/common/collect/EnumMultiset.h>
#include <com/google/common/collect/EvictingQueue.h>
#include <com/google/common/collect/ExplicitOrdering.h>
#include <com/google/common/collect/FilteredEntryMultimap.h>
#include <com/google/common/collect/FilteredEntrySetMultimap.h>
#include <com/google/common/collect/FilteredKeyListMultimap.h>
#include <com/google/common/collect/FilteredKeyMultimap.h>
#include <com/google/common/collect/FilteredKeySetMultimap.h>
#include <com/google/common/collect/FilteredMultimap.h>
#include <com/google/common/collect/FilteredMultimapValues.h>
#include <com/google/common/collect/FilteredSetMultimap.h>
#include <com/google/common/collect/FluentIterable.h>
#include <com/google/common/collect/ForwardingBlockingDeque.h>
#include <com/google/common/collect/ForwardingCollection.h>
#include <com/google/common/collect/ForwardingConcurrentMap.h>
#include <com/google/common/collect/ForwardingDeque.h>
#include <com/google/common/collect/ForwardingImmutableCollection.h>
#include <com/google/common/collect/ForwardingImmutableList.h>
#include <com/google/common/collect/ForwardingImmutableMap.h>
#include <com/google/common/collect/ForwardingImmutableSet.h>
#include <com/google/common/collect/ForwardingIterator.h>
#include <com/google/common/collect/ForwardingList.h>
#include <com/google/common/collect/ForwardingListIterator.h>
#include <com/google/common/collect/ForwardingListMultimap.h>
#include <com/google/common/collect/ForwardingMap.h>
#include <com/google/common/collect/ForwardingMapEntry.h>
#include <com/google/common/collect/ForwardingMultimap.h>
#include <com/google/common/collect/ForwardingMultiset.h>
#include <com/google/common/collect/ForwardingNavigableMap.h>
#include <com/google/common/collect/ForwardingNavigableSet.h>
#include <com/google/common/collect/ForwardingObject.h>
#include <com/google/common/collect/ForwardingQueue.h>
#include <com/google/common/collect/ForwardingSet.h>
#include <com/google/common/collect/ForwardingSetMultimap.h>
#include <com/google/common/collect/ForwardingSortedMap.h>
#include <com/google/common/collect/ForwardingSortedMultiset.h>
#include <com/google/common/collect/ForwardingSortedSet.h>
#include <com/google/common/collect/ForwardingSortedSetMultimap.h>
#include <com/google/common/collect/ForwardingTable.h>
#include <com/google/common/collect/GeneralRange.h>
#include <com/google/common/collect/GwtTransient.h>
#include <com/google/common/collect/HashBasedTable.h>
#include <com/google/common/collect/HashBiMap.h>
#include <com/google/common/collect/HashMultimap.h>
#include <com/google/common/collect/HashMultimapGwtSerializationDependencies.h>
#include <com/google/common/collect/HashMultiset.h>
#include <com/google/common/collect/Hashing.h>
#include <com/google/common/collect/ImmutableAsList.h>
#include <com/google/common/collect/ImmutableBiMap.h>
#include <com/google/common/collect/ImmutableBiMapFauxverideShim.h>
#include <com/google/common/collect/ImmutableClassToInstanceMap.h>
#include <com/google/common/collect/ImmutableCollection.h>
#include <com/google/common/collect/ImmutableEntry.h>
#include <com/google/common/collect/ImmutableEnumMap.h>
#include <com/google/common/collect/ImmutableEnumSet.h>
#include <com/google/common/collect/ImmutableList.h>
#include <com/google/common/collect/ImmutableListMultimap.h>
#include <com/google/common/collect/ImmutableMap.h>
#include <com/google/common/collect/ImmutableMapEntry.h>
#include <com/google/common/collect/ImmutableMapEntrySet.h>
#include <com/google/common/collect/ImmutableMapKeySet.h>
#include <com/google/common/collect/ImmutableMapValues.h>
#include <com/google/common/collect/ImmutableMultimap.h>
#include <com/google/common/collect/ImmutableMultiset.h>
#include <com/google/common/collect/ImmutableMultisetGwtSerializationDependencies.h>
#include <com/google/common/collect/ImmutableRangeMap.h>
#include <com/google/common/collect/ImmutableRangeSet.h>
#include <com/google/common/collect/ImmutableSet.h>
#include <com/google/common/collect/ImmutableSetMultimap.h>
#include <com/google/common/collect/ImmutableSortedAsList.h>
#include <com/google/common/collect/ImmutableSortedMap.h>
#include <com/google/common/collect/ImmutableSortedMapFauxverideShim.h>
#include <com/google/common/collect/ImmutableSortedMultiset.h>
#include <com/google/common/collect/ImmutableSortedMultisetFauxverideShim.h>
#include <com/google/common/collect/ImmutableSortedSet.h>
#include <com/google/common/collect/ImmutableSortedSetFauxverideShim.h>
#include <com/google/common/collect/ImmutableTable.h>
#include <com/google/common/collect/IndexedImmutableSet.h>
#include <com/google/common/collect/Interner.h>
#include <com/google/common/collect/Interners.h>
#include <com/google/common/collect/Iterables.h>
#include <com/google/common/collect/Iterators.h>
#include <com/google/common/collect/JdkBackedImmutableBiMap.h>
#include <com/google/common/collect/JdkBackedImmutableMap.h>
#include <com/google/common/collect/JdkBackedImmutableMultiset.h>
#include <com/google/common/collect/JdkBackedImmutableSet.h>
#include <com/google/common/collect/LexicographicalOrdering.h>
#include <com/google/common/collect/LinkedHashMultimap.h>
#include <com/google/common/collect/LinkedHashMultimapGwtSerializationDependencies.h>
#include <com/google/common/collect/LinkedHashMultiset.h>
#include <com/google/common/collect/LinkedListMultimap.h>
#include <com/google/common/collect/ListMultimap.h>
#include <com/google/common/collect/Lists.h>
#include <com/google/common/collect/MapDifference.h>
#include <com/google/common/collect/MapMaker.h>
#include <com/google/common/collect/MapMakerInternalMap.h>
#include <com/google/common/collect/Maps.h>
#include <com/google/common/collect/MinMaxPriorityQueue.h>
#include <com/google/common/collect/MoreCollectors.h>
#include <com/google/common/collect/Multimap.h>
#include <com/google/common/collect/MultimapBuilder.h>
#include <com/google/common/collect/Multimaps.h>
#include <com/google/common/collect/Multiset.h>
#include <com/google/common/collect/Multisets.h>
#include <com/google/common/collect/MutableClassToInstanceMap.h>
#include <com/google/common/collect/NaturalOrdering.h>
#include <com/google/common/collect/NullnessCasts.h>
#include <com/google/common/collect/NullsFirstOrdering.h>
#include <com/google/common/collect/NullsLastOrdering.h>
#include <com/google/common/collect/ObjectArrays.h>
#include <com/google/common/collect/Ordering.h>
#include <com/google/common/collect/ParametricNullness.h>
#include <com/google/common/collect/PeekingIterator.h>
#include <com/google/common/collect/Platform.h>
#include <com/google/common/collect/Queues.h>
#include <com/google/common/collect/Range.h>
#include <com/google/common/collect/RangeGwtSerializationDependencies.h>
#include <com/google/common/collect/RangeMap.h>
#include <com/google/common/collect/RangeSet.h>
#include <com/google/common/collect/RegularContiguousSet.h>
#include <com/google/common/collect/RegularImmutableAsList.h>
#include <com/google/common/collect/RegularImmutableBiMap.h>
#include <com/google/common/collect/RegularImmutableList.h>
#include <com/google/common/collect/RegularImmutableMap.h>
#include <com/google/common/collect/RegularImmutableMultiset.h>
#include <com/google/common/collect/RegularImmutableSet.h>
#include <com/google/common/collect/RegularImmutableSortedMultiset.h>
#include <com/google/common/collect/RegularImmutableSortedSet.h>
#include <com/google/common/collect/RegularImmutableTable.h>
#include <com/google/common/collect/ReverseNaturalOrdering.h>
#include <com/google/common/collect/ReverseOrdering.h>
#include <com/google/common/collect/RowSortedTable.h>
#include <com/google/common/collect/Serialization.h>
#include <com/google/common/collect/SetMultimap.h>
#include <com/google/common/collect/Sets.h>
#include <com/google/common/collect/SingletonImmutableBiMap.h>
#include <com/google/common/collect/SingletonImmutableList.h>
#include <com/google/common/collect/SingletonImmutableSet.h>
#include <com/google/common/collect/SingletonImmutableTable.h>
#include <com/google/common/collect/SortedIterable.h>
#include <com/google/common/collect/SortedIterables.h>
#include <com/google/common/collect/SortedLists.h>
#include <com/google/common/collect/SortedMapDifference.h>
#include <com/google/common/collect/SortedMultiset.h>
#include <com/google/common/collect/SortedMultisetBridge.h>
#include <com/google/common/collect/SortedMultisets.h>
#include <com/google/common/collect/SortedSetMultimap.h>
#include <com/google/common/collect/SparseImmutableTable.h>
#include <com/google/common/collect/StandardRowSortedTable.h>
#include <com/google/common/collect/StandardTable.h>
#include <com/google/common/collect/Streams.h>
#include <com/google/common/collect/Synchronized.h>
#include <com/google/common/collect/Table.h>
#include <com/google/common/collect/TableCollectors.h>
#include <com/google/common/collect/Tables.h>
#include <com/google/common/collect/TopKSelector.h>
#include <com/google/common/collect/TransformedIterator.h>
#include <com/google/common/collect/TransformedListIterator.h>
#include <com/google/common/collect/TreeBasedTable.h>
#include <com/google/common/collect/TreeMultimap.h>
#include <com/google/common/collect/TreeMultiset.h>
#include <com/google/common/collect/TreeRangeMap.h>
#include <com/google/common/collect/TreeRangeSet.h>
#include <com/google/common/collect/TreeTraverser.h>
#include <com/google/common/collect/UnmodifiableIterator.h>
#include <com/google/common/collect/UnmodifiableListIterator.h>
#include <com/google/common/collect/UnmodifiableSortedMultiset.h>
#include <com/google/common/collect/UsingToStringOrdering.h>
#include <com/google/common/collect/package-info.h>
#include <com/google/common/escape/ArrayBasedCharEscaper.h>
#include <com/google/common/escape/ArrayBasedEscaperMap.h>
#include <com/google/common/escape/ArrayBasedUnicodeEscaper.h>
#include <com/google/common/escape/CharEscaper.h>
#include <com/google/common/escape/CharEscaperBuilder.h>
#include <com/google/common/escape/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/escape/Escaper.h>
#include <com/google/common/escape/Escapers.h>
#include <com/google/common/escape/ParametricNullness.h>
#include <com/google/common/escape/Platform.h>
#include <com/google/common/escape/UnicodeEscaper.h>
#include <com/google/common/escape/package-info.h>
#include <com/google/common/eventbus/AllowConcurrentEvents.h>
#include <com/google/common/eventbus/AsyncEventBus.h>
#include <com/google/common/eventbus/DeadEvent.h>
#include <com/google/common/eventbus/Dispatcher.h>
#include <com/google/common/eventbus/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/eventbus/EventBus.h>
#include <com/google/common/eventbus/ParametricNullness.h>
#include <com/google/common/eventbus/Subscribe.h>
#include <com/google/common/eventbus/Subscriber.h>
#include <com/google/common/eventbus/SubscriberExceptionContext.h>
#include <com/google/common/eventbus/SubscriberExceptionHandler.h>
#include <com/google/common/eventbus/SubscriberRegistry.h>
#include <com/google/common/eventbus/package-info.h>
#include <com/google/common/graph/AbstractBaseGraph.h>
#include <com/google/common/graph/AbstractDirectedNetworkConnections.h>
#include <com/google/common/graph/AbstractGraph.h>
#include <com/google/common/graph/AbstractGraphBuilder.h>
#include <com/google/common/graph/AbstractNetwork.h>
#include <com/google/common/graph/AbstractUndirectedNetworkConnections.h>
#include <com/google/common/graph/AbstractValueGraph.h>
#include <com/google/common/graph/BaseGraph.h>
#include <com/google/common/graph/DirectedGraphConnections.h>
#include <com/google/common/graph/DirectedMultiNetworkConnections.h>
#include <com/google/common/graph/DirectedNetworkConnections.h>
#include <com/google/common/graph/EdgesConnecting.h>
#include <com/google/common/graph/ElementOrder.h>
#include <com/google/common/graph/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/graph/EndpointPair.h>
#include <com/google/common/graph/EndpointPairIterator.h>
#include <com/google/common/graph/ForwardingGraph.h>
#include <com/google/common/graph/ForwardingNetwork.h>
#include <com/google/common/graph/ForwardingValueGraph.h>
#include <com/google/common/graph/Graph.h>
#include <com/google/common/graph/GraphBuilder.h>
#include <com/google/common/graph/GraphConnections.h>
#include <com/google/common/graph/GraphConstants.h>
#include <com/google/common/graph/Graphs.h>
#include <com/google/common/graph/ImmutableGraph.h>
#include <com/google/common/graph/ImmutableNetwork.h>
#include <com/google/common/graph/ImmutableValueGraph.h>
#include <com/google/common/graph/IncidentEdgeSet.h>
#include <com/google/common/graph/MapIteratorCache.h>
#include <com/google/common/graph/MapRetrievalCache.h>
#include <com/google/common/graph/MultiEdgesConnecting.h>
#include <com/google/common/graph/MutableGraph.h>
#include <com/google/common/graph/MutableNetwork.h>
#include <com/google/common/graph/MutableValueGraph.h>
#include <com/google/common/graph/Network.h>
#include <com/google/common/graph/NetworkBuilder.h>
#include <com/google/common/graph/NetworkConnections.h>
#include <com/google/common/graph/ParametricNullness.h>
#include <com/google/common/graph/PredecessorsFunction.h>
#include <com/google/common/graph/StandardMutableGraph.h>
#include <com/google/common/graph/StandardMutableNetwork.h>
#include <com/google/common/graph/StandardMutableValueGraph.h>
#include <com/google/common/graph/StandardNetwork.h>
#include <com/google/common/graph/StandardValueGraph.h>
#include <com/google/common/graph/SuccessorsFunction.h>
#include <com/google/common/graph/Traverser.h>
#include <com/google/common/graph/UndirectedGraphConnections.h>
#include <com/google/common/graph/UndirectedMultiNetworkConnections.h>
#include <com/google/common/graph/UndirectedNetworkConnections.h>
#include <com/google/common/graph/ValueGraph.h>
#include <com/google/common/graph/ValueGraphBuilder.h>
#include <com/google/common/graph/package-info.h>
#include <com/google/common/hash/AbstractByteHasher.h>
#include <com/google/common/hash/AbstractCompositeHashFunction.h>
#include <com/google/common/hash/AbstractHashFunction.h>
#include <com/google/common/hash/AbstractHasher.h>
#include <com/google/common/hash/AbstractNonStreamingHashFunction.h>
#include <com/google/common/hash/AbstractStreamingHasher.h>
#include <com/google/common/hash/BloomFilter.h>
#include <com/google/common/hash/BloomFilterStrategies.h>
#include <com/google/common/hash/ChecksumHashFunction.h>
#include <com/google/common/hash/Crc32cHashFunction.h>
#include <com/google/common/hash/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/hash/FarmHashFingerprint64.h>
#include <com/google/common/hash/Fingerprint2011.h>
#include <com/google/common/hash/Funnel.h>
#include <com/google/common/hash/Funnels.h>
#include <com/google/common/hash/HashCode.h>
#include <com/google/common/hash/HashFunction.h>
#include <com/google/common/hash/Hasher.h>
#include <com/google/common/hash/Hashing.h>
#include <com/google/common/hash/HashingInputStream.h>
#include <com/google/common/hash/HashingOutputStream.h>
#include <com/google/common/hash/ImmutableSupplier.h>
#include <com/google/common/hash/Java8Compatibility.h>
#include <com/google/common/hash/LittleEndianByteArray.h>
#include <com/google/common/hash/LongAddable.h>
#include <com/google/common/hash/LongAddables.h>
#include <com/google/common/hash/LongAdder.h>
#include <com/google/common/hash/MacHashFunction.h>
#include <com/google/common/hash/MessageDigestHashFunction.h>
#include <com/google/common/hash/Murmur3_128HashFunction.h>
#include <com/google/common/hash/Murmur3_32HashFunction.h>
#include <com/google/common/hash/ParametricNullness.h>
#include <com/google/common/hash/PrimitiveSink.h>
#include <com/google/common/hash/SipHashFunction.h>
#include <com/google/common/hash/Striped64.h>
#include <com/google/common/hash/package-info.h>
#include <com/google/common/html/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/html/HtmlEscapers.h>
#include <com/google/common/html/ParametricNullness.h>
#include <com/google/common/html/package-info.h>
#include <com/google/common/io/AppendableWriter.h>
#include <com/google/common/io/BaseEncoding.h>
#include <com/google/common/io/ByteArrayDataInput.h>
#include <com/google/common/io/ByteArrayDataOutput.h>
#include <com/google/common/io/ByteProcessor.h>
#include <com/google/common/io/ByteSink.h>
#include <com/google/common/io/ByteSource.h>
#include <com/google/common/io/ByteStreams.h>
#include <com/google/common/io/CharSequenceReader.h>
#include <com/google/common/io/CharSink.h>
#include <com/google/common/io/CharSource.h>
#include <com/google/common/io/CharStreams.h>
#include <com/google/common/io/Closeables.h>
#include <com/google/common/io/Closer.h>
#include <com/google/common/io/CountingInputStream.h>
#include <com/google/common/io/CountingOutputStream.h>
#include <com/google/common/io/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/io/FileBackedOutputStream.h>
#include <com/google/common/io/FileWriteMode.h>
#include <com/google/common/io/Files.h>
#include <com/google/common/io/Flushables.h>
#include <com/google/common/io/InsecureRecursiveDeleteException.h>
#include <com/google/common/io/Java8Compatibility.h>
#include <com/google/common/io/LineBuffer.h>
#include <com/google/common/io/LineProcessor.h>
#include <com/google/common/io/LineReader.h>
#include <com/google/common/io/LittleEndianDataInputStream.h>
#include <com/google/common/io/LittleEndianDataOutputStream.h>
#include <com/google/common/io/MoreFiles.h>
#include <com/google/common/io/MultiInputStream.h>
#include <com/google/common/io/MultiReader.h>
#include <com/google/common/io/ParametricNullness.h>
#include <com/google/common/io/PatternFilenameFilter.h>
#include <com/google/common/io/ReaderInputStream.h>
#include <com/google/common/io/RecursiveDeleteOption.h>
#include <com/google/common/io/Resources.h>
#include <com/google/common/io/package-info.h>
#include <com/google/common/math/BigDecimalMath.h>
#include <com/google/common/math/BigIntegerMath.h>
#include <com/google/common/math/DoubleMath.h>
#include <com/google/common/math/DoubleUtils.h>
#include <com/google/common/math/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/math/IntMath.h>
#include <com/google/common/math/LinearTransformation.h>
#include <com/google/common/math/LongMath.h>
#include <com/google/common/math/MathPreconditions.h>
#include <com/google/common/math/PairedStats.h>
#include <com/google/common/math/PairedStatsAccumulator.h>
#include <com/google/common/math/ParametricNullness.h>
#include <com/google/common/math/Quantiles.h>
#include <com/google/common/math/Stats.h>
#include <com/google/common/math/StatsAccumulator.h>
#include <com/google/common/math/ToDoubleRounder.h>
#include <com/google/common/math/package-info.h>
#include <com/google/common/net/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/net/HostAndPort.h>
#include <com/google/common/net/HostSpecifier.h>
#include <com/google/common/net/HttpHeaders.h>
#include <com/google/common/net/InetAddresses.h>
#include <com/google/common/net/InternetDomainName.h>
#include <com/google/common/net/MediaType.h>
#include <com/google/common/net/ParametricNullness.h>
#include <com/google/common/net/PercentEscaper.h>
#include <com/google/common/net/UrlEscapers.h>
#include <com/google/common/net/package-info.h>
#include <com/google/common/primitives/Booleans.h>
#include <com/google/common/primitives/Bytes.h>
#include <com/google/common/primitives/Chars.h>
#include <com/google/common/primitives/Doubles.h>
#include <com/google/common/primitives/DoublesMethodsForWeb.h>
#include <com/google/common/primitives/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/primitives/Floats.h>
#include <com/google/common/primitives/FloatsMethodsForWeb.h>
#include <com/google/common/primitives/ImmutableDoubleArray.h>
#include <com/google/common/primitives/ImmutableIntArray.h>
#include <com/google/common/primitives/ImmutableLongArray.h>
#include <com/google/common/primitives/Ints.h>
#include <com/google/common/primitives/IntsMethodsForWeb.h>
#include <com/google/common/primitives/Longs.h>
#include <com/google/common/primitives/ParametricNullness.h>
#include <com/google/common/primitives/ParseRequest.h>
#include <com/google/common/primitives/Platform.h>
#include <com/google/common/primitives/Primitives.h>
#include <com/google/common/primitives/Shorts.h>
#include <com/google/common/primitives/ShortsMethodsForWeb.h>
#include <com/google/common/primitives/SignedBytes.h>
#include <com/google/common/primitives/UnsignedBytes.h>
#include <com/google/common/primitives/UnsignedInteger.h>
#include <com/google/common/primitives/UnsignedInts.h>
#include <com/google/common/primitives/UnsignedLong.h>
#include <com/google/common/primitives/UnsignedLongs.h>
#include <com/google/common/primitives/package-info.h>
#include <com/google/common/reflect/AbstractInvocationHandler.h>
#include <com/google/common/reflect/ClassPath.h>
#include <com/google/common/reflect/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/reflect/ImmutableTypeToInstanceMap.h>
#include <com/google/common/reflect/Invokable.h>
#include <com/google/common/reflect/MutableTypeToInstanceMap.h>
#include <com/google/common/reflect/Parameter.h>
#include <com/google/common/reflect/ParametricNullness.h>
#include <com/google/common/reflect/Reflection.h>
#include <com/google/common/reflect/TypeCapture.h>
#include <com/google/common/reflect/TypeParameter.h>
#include <com/google/common/reflect/TypeResolver.h>
#include <com/google/common/reflect/TypeToInstanceMap.h>
#include <com/google/common/reflect/TypeToken.h>
#include <com/google/common/reflect/TypeVisitor.h>
#include <com/google/common/reflect/Types.h>
#include <com/google/common/reflect/package-info.h>
#include <com/google/common/util/concurrent/AbstractCatchingFuture.h>
#include <com/google/common/util/concurrent/AbstractExecutionThreadService.h>
#include <com/google/common/util/concurrent/AbstractFuture.h>
#include <com/google/common/util/concurrent/AbstractIdleService.h>
#include <com/google/common/util/concurrent/AbstractListeningExecutorService.h>
#include <com/google/common/util/concurrent/AbstractScheduledService.h>
#include <com/google/common/util/concurrent/AbstractService.h>
#include <com/google/common/util/concurrent/AbstractTransformFuture.h>
#include <com/google/common/util/concurrent/AggregateFuture.h>
#include <com/google/common/util/concurrent/AggregateFutureState.h>
#include <com/google/common/util/concurrent/AsyncCallable.h>
#include <com/google/common/util/concurrent/AsyncFunction.h>
#include <com/google/common/util/concurrent/AtomicDouble.h>
#include <com/google/common/util/concurrent/AtomicDoubleArray.h>
#include <com/google/common/util/concurrent/AtomicLongMap.h>
#include <com/google/common/util/concurrent/Atomics.h>
#include <com/google/common/util/concurrent/Callables.h>
#include <com/google/common/util/concurrent/ClosingFuture.h>
#include <com/google/common/util/concurrent/CollectionFuture.h>
#include <com/google/common/util/concurrent/CombinedFuture.h>
#include <com/google/common/util/concurrent/CycleDetectingLockFactory.h>
#include <com/google/common/util/concurrent/DirectExecutor.h>
#include <com/google/common/util/concurrent/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/util/concurrent/ExecutionError.h>
#include <com/google/common/util/concurrent/ExecutionList.h>
#include <com/google/common/util/concurrent/ExecutionSequencer.h>
#include <com/google/common/util/concurrent/FakeTimeLimiter.h>
#include <com/google/common/util/concurrent/FluentFuture.h>
#include <com/google/common/util/concurrent/ForwardingBlockingDeque.h>
#include <com/google/common/util/concurrent/ForwardingBlockingQueue.h>
#include <com/google/common/util/concurrent/ForwardingCondition.h>
#include <com/google/common/util/concurrent/ForwardingExecutorService.h>
#include <com/google/common/util/concurrent/ForwardingFluentFuture.h>
#include <com/google/common/util/concurrent/ForwardingFuture.h>
#include <com/google/common/util/concurrent/ForwardingListenableFuture.h>
#include <com/google/common/util/concurrent/ForwardingListeningExecutorService.h>
#include <com/google/common/util/concurrent/ForwardingLock.h>
#include <com/google/common/util/concurrent/FutureCallback.h>
#include <com/google/common/util/concurrent/Futures.h>
#include <com/google/common/util/concurrent/FuturesGetChecked.h>
#include <com/google/common/util/concurrent/GwtFluentFutureCatchingSpecialization.h>
#include <com/google/common/util/concurrent/GwtFuturesCatchingSpecialization.h>
#include <com/google/common/util/concurrent/ImmediateFuture.h>
#include <com/google/common/util/concurrent/Internal.h>
#include <com/google/common/util/concurrent/InterruptibleTask.h>
#include <com/google/common/util/concurrent/JdkFutureAdapters.h>
#include <com/google/common/util/concurrent/ListenableFuture.h>
#include <com/google/common/util/concurrent/ListenableFutureTask.h>
#include <com/google/common/util/concurrent/ListenableScheduledFuture.h>
#include <com/google/common/util/concurrent/ListenerCallQueue.h>
#include <com/google/common/util/concurrent/ListeningExecutorService.h>
#include <com/google/common/util/concurrent/ListeningScheduledExecutorService.h>
#include <com/google/common/util/concurrent/Monitor.h>
#include <com/google/common/util/concurrent/MoreExecutors.h>
#include <com/google/common/util/concurrent/NullnessCasts.h>
#include <com/google/common/util/concurrent/OverflowAvoidingLockSupport.h>
#include <com/google/common/util/concurrent/ParametricNullness.h>
#include <com/google/common/util/concurrent/Partially.h>
#include <com/google/common/util/concurrent/Platform.h>
#include <com/google/common/util/concurrent/RateLimiter.h>
#include <com/google/common/util/concurrent/Runnables.h>
#include <com/google/common/util/concurrent/SequentialExecutor.h>
#include <com/google/common/util/concurrent/Service.h>
#include <com/google/common/util/concurrent/ServiceManager.h>
#include <com/google/common/util/concurrent/ServiceManagerBridge.h>
#include <com/google/common/util/concurrent/SettableFuture.h>
#include <com/google/common/util/concurrent/SimpleTimeLimiter.h>
#include <com/google/common/util/concurrent/SmoothRateLimiter.h>
#include <com/google/common/util/concurrent/Striped.h>
#include <com/google/common/util/concurrent/ThreadFactoryBuilder.h>
#include <com/google/common/util/concurrent/TimeLimiter.h>
#include <com/google/common/util/concurrent/TimeoutFuture.h>
#include <com/google/common/util/concurrent/TrustedListenableFutureTask.h>
#include <com/google/common/util/concurrent/UncaughtExceptionHandlers.h>
#include <com/google/common/util/concurrent/UncheckedExecutionException.h>
#include <com/google/common/util/concurrent/UncheckedTimeoutException.h>
#include <com/google/common/util/concurrent/Uninterruptibles.h>
#include <com/google/common/util/concurrent/WrappingExecutorService.h>
#include <com/google/common/util/concurrent/WrappingScheduledExecutorService.h>
#include <com/google/common/util/concurrent/package-info.h>
#include <com/google/common/xml/ElementTypesAreNonnullByDefault.h>
#include <com/google/common/xml/ParametricNullness.h>
#include <com/google/common/xml/XmlEscapers.h>
#include <com/google/common/xml/package-info.h>
#include <com/google/thirdparty/publicsuffix/PublicSuffixPatterns.h>
#include <com/google/thirdparty/publicsuffix/PublicSuffixType.h>
#include <com/google/thirdparty/publicsuffix/TrieParser.h>
#include <com/google/errorprone/annotations/CanIgnoreReturnValue.h>
#include <com/google/errorprone/annotations/CheckReturnValue.h>
#include <com/google/errorprone/annotations/CompatibleWith.h>
#include <com/google/errorprone/annotations/CompileTimeConstant.h>
#include <com/google/errorprone/annotations/DoNotCall.h>
#include <com/google/errorprone/annotations/DoNotMock.h>
#include <com/google/errorprone/annotations/ForOverride.h>
#include <com/google/errorprone/annotations/FormatMethod.h>
#include <com/google/errorprone/annotations/FormatString.h>
#include <com/google/errorprone/annotations/Immutable.h>
#include <com/google/errorprone/annotations/IncompatibleModifiers.h>
#include <com/google/errorprone/annotations/InlineMe.h>
#include <com/google/errorprone/annotations/InlineMeValidationDisabled.h>
#include <com/google/errorprone/annotations/Modifier.h>
#include <com/google/errorprone/annotations/MustBeClosed.h>
#include <com/google/errorprone/annotations/NoAllocation.h>
#include <com/google/errorprone/annotations/OverridingMethodsMustInvokeSuper.h>
#include <com/google/errorprone/annotations/RequiredModifiers.h>
#include <com/google/errorprone/annotations/RestrictedApi.h>
#include <com/google/errorprone/annotations/SuppressPackageLocation.h>
#include <com/google/errorprone/annotations/Var.h>
#include <com/google/errorprone/annotations/concurrent/GuardedBy.h>
#include <com/google/errorprone/annotations/concurrent/LazyInit.h>
#include <com/google/errorprone/annotations/concurrent/LockMethod.h>
#include <com/google/errorprone/annotations/concurrent/UnlockMethod.h>
#include <org/checkerframework/checker/nullness/qual/EnsuresNonNull.h>
#include <org/checkerframework/checker/nullness/qual/MonotonicNonNull.h>
#include <org/checkerframework/checker/nullness/qual/NonNull.h>
#include <org/checkerframework/checker/nullness/qual/Nullable.h>
#include <org/checkerframework/checker/nullness/qual/RequiresNonNull.h>
#include <org/checkerframework/framework/qual/DefaultFor.h>
#include <org/checkerframework/framework/qual/DefaultQualifierInHierarchy.h>
#include <org/checkerframework/framework/qual/InheritedAnnotation.h>
#include <org/checkerframework/framework/qual/LiteralKind.h>
#include <org/checkerframework/framework/qual/MonotonicQualifier.h>
#include <org/checkerframework/framework/qual/PostconditionAnnotation.h>
#include <org/checkerframework/framework/qual/PreconditionAnnotation.h>
#include <org/checkerframework/framework/qual/QualifierForLiterals.h>
#include <org/checkerframework/framework/qual/SubtypeOf.h>
#include <org/checkerframework/framework/qual/TypeKind.h>
#include <org/checkerframework/framework/qual/TypeUseLocation.h>
#include <org/checkerframework/framework/qual/UpperBoundFor.h>
#include <org/codehaus/mojo/animal_sniffer/IgnoreJRERequirement.h>
#include <com/google/common/util/concurrent/internal/InternalFutureFailureAccess.h>
#include <com/google/common/util/concurrent/internal/InternalFutures.h>
