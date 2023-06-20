//
// Mockito.h
//

#include <org/mockito/AdditionalAnswers.h>
#include <org/mockito/AdditionalMatchers.h>
#include <org/mockito/Answers.h>
#include <org/mockito/ArgumentCaptor.h>
#include <org/mockito/ArgumentMatcher.h>
#include <org/mockito/ArgumentMatchers.h>
#include <org/mockito/BDDMockito.h>
#include <org/mockito/Captor.h>
#include <org/mockito/CheckReturnValue.h>
#include <org/mockito/InOrder.h>
#include <org/mockito/Incubating.h>
#include <org/mockito/InjectMocks.h>
#include <org/mockito/Matchers.h>
#include <org/mockito/Mock.h>
#include <org/mockito/MockSettings.h>
#include <org/mockito/MockingDetails.h>
#include <org/mockito/Mockito.h>
#include <org/mockito/MockitoAnnotations.h>
#include <org/mockito/MockitoDebugger.h>
#include <org/mockito/MockitoFramework.h>
#include <org/mockito/MockitoSession.h>
#include <org/mockito/NotExtensible.h>
#include <org/mockito/Spy.h>
#include <org/mockito/codegen/InjectionBase.h>
#include <org/mockito/configuration/AnnotationEngine.h>
#include <org/mockito/configuration/DefaultMockitoConfiguration.h>
#include <org/mockito/configuration/IMockitoConfiguration.h>
#include <org/mockito/creation/instance/InstantiationException.h>
#include <org/mockito/creation/instance/Instantiator.h>
#include <org/mockito/exceptions/base/MockitoAssertionError.h>
#include <org/mockito/exceptions/base/MockitoException.h>
#include <org/mockito/exceptions/base/MockitoInitializationException.h>
#include <org/mockito/exceptions/base/MockitoSerializationIssue.h>
#include <org/mockito/exceptions/misusing/CannotStubVoidMethodWithReturnValue.h>
#include <org/mockito/exceptions/misusing/CannotVerifyStubOnlyMock.h>
#include <org/mockito/exceptions/misusing/FriendlyReminderException.h>
#include <org/mockito/exceptions/misusing/InjectMocksException.h>
#include <org/mockito/exceptions/misusing/InvalidUseOfMatchersException.h>
#include <org/mockito/exceptions/misusing/MissingMethodInvocationException.h>
#include <org/mockito/exceptions/misusing/MockitoConfigurationException.h>
#include <org/mockito/exceptions/misusing/NotAMockException.h>
#include <org/mockito/exceptions/misusing/NullInsteadOfMockException.h>
#include <org/mockito/exceptions/misusing/PotentialStubbingProblem.h>
#include <org/mockito/exceptions/misusing/RedundantListenerException.h>
#include <org/mockito/exceptions/misusing/UnfinishedMockingSessionException.h>
#include <org/mockito/exceptions/misusing/UnfinishedStubbingException.h>
#include <org/mockito/exceptions/misusing/UnfinishedVerificationException.h>
#include <org/mockito/exceptions/misusing/UnnecessaryStubbingException.h>
#include <org/mockito/exceptions/misusing/WrongTypeOfReturnValue.h>
#include <org/mockito/exceptions/stacktrace/StackTraceCleaner.h>
#include <org/mockito/exceptions/verification/ArgumentsAreDifferent.h>
#include <org/mockito/exceptions/verification/MoreThanAllowedActualInvocations.h>
#include <org/mockito/exceptions/verification/NeverWantedButInvoked.h>
#include <org/mockito/exceptions/verification/NoInteractionsWanted.h>
#include <org/mockito/exceptions/verification/SmartNullPointerException.h>
#include <org/mockito/exceptions/verification/TooLittleActualInvocations.h>
#include <org/mockito/exceptions/verification/TooManyActualInvocations.h>
#include <org/mockito/exceptions/verification/VerificationInOrderFailure.h>
#include <org/mockito/exceptions/verification/WantedButNotInvoked.h>
#include <org/mockito/exceptions/verification/junit/ArgumentsAreDifferent.h>
#include <org/mockito/hamcrest/MockitoHamcrest.h>
#include <org/mockito/internal/InOrderImpl.h>
#include <org/mockito/internal/InternalMockHandler.h>
#include <org/mockito/internal/MockitoCore.h>
#include <org/mockito/internal/configuration/CaptorAnnotationProcessor.h>
#include <org/mockito/internal/configuration/ClassPathLoader.h>
#include <org/mockito/internal/configuration/DefaultInjectionEngine.h>
#include <org/mockito/internal/configuration/FieldAnnotationProcessor.h>
#include <org/mockito/internal/configuration/GlobalConfiguration.h>
#include <org/mockito/internal/configuration/IndependentAnnotationEngine.h>
#include <org/mockito/internal/configuration/InjectingAnnotationEngine.h>
#include <org/mockito/internal/configuration/MockAnnotationProcessor.h>
#include <org/mockito/internal/configuration/SpyAnnotationEngine.h>
#include <org/mockito/internal/configuration/injection/ConstructorInjection.h>
#include <org/mockito/internal/configuration/injection/MockInjection.h>
#include <org/mockito/internal/configuration/injection/MockInjectionStrategy.h>
#include <org/mockito/internal/configuration/injection/PropertyAndSetterInjection.h>
#include <org/mockito/internal/configuration/injection/SpyOnInjectedFieldsHandler.h>
#include <org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h>
#include <org/mockito/internal/configuration/injection/filter/NameBasedCandidateFilter.h>
#include <org/mockito/internal/configuration/injection/filter/OngoingInjector.h>
#include <org/mockito/internal/configuration/injection/filter/TerminalMockCandidateFilter.h>
#include <org/mockito/internal/configuration/injection/filter/TypeBasedCandidateFilter.h>
#include <org/mockito/internal/configuration/injection/scanner/InjectMocksScanner.h>
#include <org/mockito/internal/configuration/injection/scanner/MockScanner.h>
#include <org/mockito/internal/configuration/plugins/DefaultMockitoPlugins.h>
#include <org/mockito/internal/configuration/plugins/DefaultPluginSwitch.h>
#include <org/mockito/internal/configuration/plugins/PluginFileReader.h>
#include <org/mockito/internal/configuration/plugins/PluginFinder.h>
#include <org/mockito/internal/configuration/plugins/PluginInitializer.h>
#include <org/mockito/internal/configuration/plugins/PluginLoader.h>
#include <org/mockito/internal/configuration/plugins/PluginRegistry.h>
#include <org/mockito/internal/configuration/plugins/Plugins.h>
#include <org/mockito/internal/creation/DelegatingMethod.h>
#include <org/mockito/internal/creation/MockSettingsImpl.h>
#include <org/mockito/internal/creation/SuspendMethod.h>
#include <org/mockito/internal/creation/instance/ConstructorInstantiator.h>
#include <org/mockito/internal/creation/instance/InstantiationException.h>
#include <org/mockito/internal/creation/instance/Instantiator.h>
#include <org/mockito/internal/creation/instance/InstantiatorProvider2Adapter.h>
#include <org/mockito/internal/creation/instance/InstantiatorProviderAdapter.h>
#include <org/mockito/internal/creation/settings/CreationSettings.h>
#include <org/mockito/internal/creation/util/MockitoMethodProxy.h>
#include <org/mockito/internal/debugging/FindingsListener.h>
#include <org/mockito/internal/debugging/InvocationsPrinter.h>
#include <org/mockito/internal/debugging/Localized.h>
#include <org/mockito/internal/debugging/LocationImpl.h>
#include <org/mockito/internal/debugging/LoggingListener.h>
#include <org/mockito/internal/debugging/MockitoDebuggerImpl.h>
#include <org/mockito/internal/debugging/VerboseMockInvocationLogger.h>
#include <org/mockito/internal/debugging/WarningsCollector.h>
#include <org/mockito/internal/debugging/WarningsFinder.h>
#include <org/mockito/internal/debugging/WarningsPrinterImpl.h>
#include <org/mockito/internal/exceptions/ExceptionIncludingMockitoWarnings.h>
#include <org/mockito/internal/exceptions/Reporter.h>
#include <org/mockito/internal/exceptions/VerificationAwareInvocation.h>
#include <org/mockito/internal/exceptions/stacktrace/ConditionalStackTraceFilter.h>
#include <org/mockito/internal/exceptions/stacktrace/DefaultStackTraceCleaner.h>
#include <org/mockito/internal/exceptions/stacktrace/DefaultStackTraceCleanerProvider.h>
#include <org/mockito/internal/exceptions/stacktrace/StackTraceFilter.h>
#include <org/mockito/internal/exceptions/util/ScenarioPrinter.h>
#include <org/mockito/internal/framework/DefaultMockitoFramework.h>
#include <org/mockito/internal/framework/DefaultMockitoSession.h>
#include <org/mockito/internal/hamcrest/HamcrestArgumentMatcher.h>
#include <org/mockito/internal/hamcrest/MatcherGenericTypeExtractor.h>
#include <org/mockito/internal/handler/InvocationNotifierHandler.h>
#include <org/mockito/internal/handler/MockHandlerFactory.h>
#include <org/mockito/internal/handler/MockHandlerImpl.h>
#include <org/mockito/internal/handler/NotifiedMethodInvocationReport.h>
#include <org/mockito/internal/handler/NullResultGuardian.h>
#include <org/mockito/internal/invocation/AbstractAwareMethod.h>
#include <org/mockito/internal/invocation/ArgumentMatcherAction.h>
#include <org/mockito/internal/invocation/ArgumentsProcessor.h>
#include <org/mockito/internal/invocation/DefaultInvocationFactory.h>
#include <org/mockito/internal/invocation/InterceptedInvocation.h>
#include <org/mockito/internal/invocation/InvocationComparator.h>
#include <org/mockito/internal/invocation/InvocationMarker.h>
#include <org/mockito/internal/invocation/InvocationMatcher.h>
#include <org/mockito/internal/invocation/InvocationsFinder.h>
#include <org/mockito/internal/invocation/MatcherApplicationStrategy.h>
#include <org/mockito/internal/invocation/MatchersBinder.h>
#include <org/mockito/internal/invocation/MockitoMethod.h>
#include <org/mockito/internal/invocation/RealMethod.h>
#include <org/mockito/internal/invocation/SerializableMethod.h>
#include <org/mockito/internal/invocation/StubInfoImpl.h>
#include <org/mockito/internal/invocation/TypeSafeMatching.h>
#include <org/mockito/internal/invocation/UnusedStubsFinder.h>
#include <org/mockito/internal/invocation/finder/AllInvocationsFinder.h>
#include <org/mockito/internal/invocation/finder/VerifiableInvocationsFinder.h>
#include <org/mockito/internal/invocation/mockref/MockReference.h>
#include <org/mockito/internal/invocation/mockref/MockStrongReference.h>
#include <org/mockito/internal/invocation/mockref/MockWeakReference.h>
#include <org/mockito/internal/junit/ArgMismatchFinder.h>
#include <org/mockito/internal/junit/DefaultStubbingLookupListener.h>
#include <org/mockito/internal/junit/DefaultTestFinishedEvent.h>
#include <org/mockito/internal/junit/ExceptionFactory.h>
#include <org/mockito/internal/junit/JUnitRule.h>
#include <org/mockito/internal/junit/MismatchReportingTestListener.h>
#include <org/mockito/internal/junit/MockitoTestListener.h>
#include <org/mockito/internal/junit/NoOpTestListener.h>
#include <org/mockito/internal/junit/StrictStubsRunnerTestListener.h>
#include <org/mockito/internal/junit/StubbingArgMismatches.h>
#include <org/mockito/internal/junit/StubbingHint.h>
#include <org/mockito/internal/junit/TestFinishedEvent.h>
#include <org/mockito/internal/junit/UniversalTestListener.h>
#include <org/mockito/internal/junit/UnnecessaryStubbingsReporter.h>
#include <org/mockito/internal/junit/UnusedStubbings.h>
#include <org/mockito/internal/junit/UnusedStubbingsFinder.h>
#include <org/mockito/internal/junit/VerificationCollectorImpl.h>
#include <org/mockito/internal/junit/util/JUnitFailureHacker.h>
#include <org/mockito/internal/listeners/AutoCleanableListener.h>
#include <org/mockito/internal/listeners/StubbingLookupEvent.h>
#include <org/mockito/internal/listeners/StubbingLookupListener.h>
#include <org/mockito/internal/listeners/StubbingLookupNotifier.h>
#include <org/mockito/internal/listeners/VerificationStartedNotifier.h>
#include <org/mockito/internal/matchers/And.h>
#include <org/mockito/internal/matchers/Any.h>
#include <org/mockito/internal/matchers/ArrayEquals.h>
#include <org/mockito/internal/matchers/CapturesArguments.h>
#include <org/mockito/internal/matchers/CapturingMatcher.h>
#include <org/mockito/internal/matchers/CompareEqual.h>
#include <org/mockito/internal/matchers/CompareTo.h>
#include <org/mockito/internal/matchers/Contains.h>
#include <org/mockito/internal/matchers/ContainsExtraTypeInfo.h>
#include <org/mockito/internal/matchers/EndsWith.h>
#include <org/mockito/internal/matchers/Equality.h>
#include <org/mockito/internal/matchers/Equals.h>
#include <org/mockito/internal/matchers/EqualsWithDelta.h>
#include <org/mockito/internal/matchers/Find.h>
#include <org/mockito/internal/matchers/GreaterOrEqual.h>
#include <org/mockito/internal/matchers/GreaterThan.h>
#include <org/mockito/internal/matchers/InstanceOf.h>
#include <org/mockito/internal/matchers/LessOrEqual.h>
#include <org/mockito/internal/matchers/LessThan.h>
#include <org/mockito/internal/matchers/LocalizedMatcher.h>
#include <org/mockito/internal/matchers/Matches.h>
#include <org/mockito/internal/matchers/Not.h>
#include <org/mockito/internal/matchers/NotNull.h>
#include <org/mockito/internal/matchers/Null.h>
#include <org/mockito/internal/matchers/Or.h>
#include <org/mockito/internal/matchers/Same.h>
#include <org/mockito/internal/matchers/StartsWith.h>
#include <org/mockito/internal/matchers/VarargMatcher.h>
#include <org/mockito/internal/matchers/apachecommons/EqualsBuilder.h>
#include <org/mockito/internal/matchers/apachecommons/ReflectionEquals.h>
#include <org/mockito/internal/matchers/text/FormattedText.h>
#include <org/mockito/internal/matchers/text/MatcherToString.h>
#include <org/mockito/internal/matchers/text/MatchersPrinter.h>
#include <org/mockito/internal/matchers/text/ValuePrinter.h>
#include <org/mockito/internal/progress/ArgumentMatcherStorage.h>
#include <org/mockito/internal/progress/ArgumentMatcherStorageImpl.h>
#include <org/mockito/internal/progress/MockingProgress.h>
#include <org/mockito/internal/progress/MockingProgressImpl.h>
#include <org/mockito/internal/progress/SequenceNumber.h>
#include <org/mockito/internal/progress/ThreadSafeMockingProgress.h>
#include <org/mockito/internal/reporting/Discrepancy.h>
#include <org/mockito/internal/reporting/Pluralizer.h>
#include <org/mockito/internal/reporting/PrintSettings.h>
#include <org/mockito/internal/reporting/SmartPrinter.h>
#include <org/mockito/internal/runners/DefaultInternalRunner.h>
#include <org/mockito/internal/runners/InternalRunner.h>
#include <org/mockito/internal/runners/RunnerFactory.h>
#include <org/mockito/internal/runners/StrictRunner.h>
#include <org/mockito/internal/runners/util/FailureDetector.h>
#include <org/mockito/internal/runners/util/RunnerProvider.h>
#include <org/mockito/internal/runners/util/TestMethodsFinder.h>
#include <org/mockito/internal/session/DefaultMockitoSessionBuilder.h>
#include <org/mockito/internal/session/MockitoLoggerAdapter.h>
#include <org/mockito/internal/session/MockitoSessionLoggerAdapter.h>
#include <org/mockito/internal/stubbing/BaseStubbing.h>
#include <org/mockito/internal/stubbing/ConsecutiveStubbing.h>
#include <org/mockito/internal/stubbing/DefaultLenientStubber.h>
#include <org/mockito/internal/stubbing/DoAnswerStyleStubbing.h>
#include <org/mockito/internal/stubbing/InvocationContainerImpl.h>
#include <org/mockito/internal/stubbing/OngoingStubbingImpl.h>
#include <org/mockito/internal/stubbing/StrictnessSelector.h>
#include <org/mockito/internal/stubbing/StubbedInvocationMatcher.h>
#include <org/mockito/internal/stubbing/StubberImpl.h>
#include <org/mockito/internal/stubbing/StubbingComparator.h>
#include <org/mockito/internal/stubbing/UnusedStubbingReporting.h>
#include <org/mockito/internal/stubbing/answers/AnswerFunctionalInterfaces.h>
#include <org/mockito/internal/stubbing/answers/AnswersWithDelay.h>
#include <org/mockito/internal/stubbing/answers/CallsRealMethods.h>
#include <org/mockito/internal/stubbing/answers/ClonesArguments.h>
#include <org/mockito/internal/stubbing/answers/DefaultAnswerValidator.h>
#include <org/mockito/internal/stubbing/answers/DoesNothing.h>
#include <org/mockito/internal/stubbing/answers/InvocationInfo.h>
#include <org/mockito/internal/stubbing/answers/Returns.h>
#include <org/mockito/internal/stubbing/answers/ReturnsArgumentAt.h>
#include <org/mockito/internal/stubbing/answers/ReturnsElementsOf.h>
#include <org/mockito/internal/stubbing/answers/ThrowsException.h>
#include <org/mockito/internal/stubbing/defaultanswers/ForwardsInvocations.h>
#include <org/mockito/internal/stubbing/defaultanswers/GloballyConfiguredAnswer.h>
#include <org/mockito/internal/stubbing/defaultanswers/ReturnsDeepStubs.h>
#include <org/mockito/internal/stubbing/defaultanswers/ReturnsEmptyValues.h>
#include <org/mockito/internal/stubbing/defaultanswers/ReturnsMocks.h>
#include <org/mockito/internal/stubbing/defaultanswers/ReturnsMoreEmptyValues.h>
#include <org/mockito/internal/stubbing/defaultanswers/ReturnsSmartNulls.h>
#include <org/mockito/internal/stubbing/defaultanswers/TriesToReturnSelf.h>
#include <org/mockito/internal/util/Checks.h>
#include <org/mockito/internal/util/ConsoleMockitoLogger.h>
#include <org/mockito/internal/util/DefaultMockingDetails.h>
#include <org/mockito/internal/util/JavaEightUtil.h>
#include <org/mockito/internal/util/MockCreationValidator.h>
#include <org/mockito/internal/util/MockitoLogger.h>
#include <org/mockito/internal/util/MockNameImpl.h>
#include <org/mockito/internal/util/MockUtil.h>
#include <org/mockito/internal/util/ObjectMethodsGuru.h>
#include <org/mockito/internal/util/Platform.h>
#include <org/mockito/internal/util/Primitives.h>
#include <org/mockito/internal/util/StringUtil.h>
#include <org/mockito/internal/util/Supplier.h>
#include <org/mockito/internal/util/Timer.h>
#include <org/mockito/internal/util/collections/HashCodeAndEqualsMockWrapper.h>
#include <org/mockito/internal/util/collections/HashCodeAndEqualsSafeSet.h>
#include <org/mockito/internal/util/collections/IdentitySet.h>
#include <org/mockito/internal/util/collections/Iterables.h>
#include <org/mockito/internal/util/collections/ListUtil.h>
#include <org/mockito/internal/util/collections/Sets.h>
#include <org/mockito/internal/util/concurrent/DetachedThreadLocal.h>
#include <org/mockito/internal/util/concurrent/WeakConcurrentMap.h>
#include <org/mockito/internal/util/concurrent/WeakConcurrentSet.h>
#include <org/mockito/internal/util/io/IOUtil.h>
#include <org/mockito/internal/util/reflection/AccessibilityChanger.h>
#include <org/mockito/internal/util/reflection/BeanPropertySetter.h>
#include <org/mockito/internal/util/reflection/FieldCopier.h>
#include <org/mockito/internal/util/reflection/FieldInitializationReport.h>
#include <org/mockito/internal/util/reflection/FieldInitializer.h>
#include <org/mockito/internal/util/reflection/FieldReader.h>
#include <org/mockito/internal/util/reflection/FieldSetter.h>
#include <org/mockito/internal/util/reflection/Fields.h>
#include <org/mockito/internal/util/reflection/GenericMaster.h>
#include <org/mockito/internal/util/reflection/GenericMetadataSupport.h>
#include <org/mockito/internal/util/reflection/GenericTypeExtractor.h>
#include <org/mockito/internal/util/reflection/InstanceField.h>
#include <org/mockito/internal/util/reflection/LenientCopyTool.h>
#include <org/mockito/internal/util/reflection/SuperTypesLastSorter.h>
#include <org/mockito/internal/verification/AtLeast.h>
#include <org/mockito/internal/verification/AtMost.h>
#include <org/mockito/internal/verification/Calls.h>
#include <org/mockito/internal/verification/DefaultRegisteredInvocations.h>
#include <org/mockito/internal/verification/Description.h>
#include <org/mockito/internal/verification/InOrderContextImpl.h>
#include <org/mockito/internal/verification/InOrderWrapper.h>
#include <org/mockito/internal/verification/MockAwareVerificationMode.h>
#include <org/mockito/internal/verification/NoMoreInteractions.h>
#include <org/mockito/internal/verification/Only.h>
#include <org/mockito/internal/verification/RegisteredInvocations.h>
#include <org/mockito/internal/verification/SingleRegisteredInvocation.h>
#include <org/mockito/internal/verification/Times.h>
#include <org/mockito/internal/verification/VerificationDataImpl.h>
#include <org/mockito/internal/verification/VerificationEventImpl.h>
#include <org/mockito/internal/verification/VerificationModeFactory.h>
#include <org/mockito/internal/verification/VerificationOverTimeImpl.h>
#include <org/mockito/internal/verification/VerificationWrapper.h>
#include <org/mockito/internal/verification/VerificationWrapperInOrderWrapper.h>
#include <org/mockito/internal/verification/api/InOrderContext.h>
#include <org/mockito/internal/verification/api/VerificationData.h>
#include <org/mockito/internal/verification/api/VerificationDataInOrder.h>
#include <org/mockito/internal/verification/api/VerificationDataInOrderImpl.h>
#include <org/mockito/internal/verification/api/VerificationInOrderMode.h>
#include <org/mockito/internal/verification/argumentmatching/ArgumentMatchingTool.h>
#include <org/mockito/internal/verification/checkers/AtLeastDiscrepancy.h>
#include <org/mockito/internal/verification/checkers/AtLeastXNumberOfInvocationsChecker.h>
#include <org/mockito/internal/verification/checkers/MissingInvocationChecker.h>
#include <org/mockito/internal/verification/checkers/NumberOfInvocationsChecker.h>
#include <org/mockito/invocation/DescribedInvocation.h>
#include <org/mockito/invocation/Invocation.h>
#include <org/mockito/invocation/InvocationContainer.h>
#include <org/mockito/invocation/InvocationFactory.h>
#include <org/mockito/invocation/InvocationOnMock.h>
#include <org/mockito/invocation/Location.h>
#include <org/mockito/invocation/MatchableInvocation.h>
#include <org/mockito/invocation/MockHandler.h>
#include <org/mockito/invocation/StubInfo.h>
#include <org/mockito/junit/MockitoJUnit.h>
#include <org/mockito/junit/MockitoJUnitRunner.h>
#include <org/mockito/junit/MockitoRule.h>
#include <org/mockito/junit/VerificationCollector.h>
#include <org/mockito/listeners/InvocationListener.h>
#include <org/mockito/listeners/MethodInvocationReport.h>
#include <org/mockito/listeners/MockCreationListener.h>
#include <org/mockito/listeners/MockitoListener.h>
#include <org/mockito/listeners/VerificationListener.h>
#include <org/mockito/listeners/VerificationStartedEvent.h>
#include <org/mockito/listeners/VerificationStartedListener.h>
#include <org/mockito/mock/MockCreationSettings.h>
#include <org/mockito/mock/MockName.h>
#include <org/mockito/mock/SerializableMode.h>
#include <org/mockito/plugins/AnnotationEngine.h>
#include <org/mockito/plugins/InstantiatorProvider.h>
#include <org/mockito/plugins/InstantiatorProvider2.h>
#include <org/mockito/plugins/MockMaker.h>
#include <org/mockito/plugins/MockitoPlugins.h>
#include <org/mockito/plugins/PluginSwitch.h>
#include <org/mockito/plugins/StackTraceCleanerProvider.h>
#include <org/mockito/quality/MockitoHint.h>
#include <org/mockito/quality/Strictness.h>
#include <org/mockito/runners/ConsoleSpammingMockitoJUnitRunner.h>
#include <org/mockito/runners/MockitoJUnitRunner.h>
#include <org/mockito/runners/VerboseMockitoJUnitRunner.h>
#include <org/mockito/session/MockitoSessionBuilder.h>
#include <org/mockito/session/MockitoSessionLogger.h>
#include <org/mockito/stubbing/Answer.h>
#include <org/mockito/stubbing/Answer1.h>
#include <org/mockito/stubbing/Answer2.h>
#include <org/mockito/stubbing/Answer3.h>
#include <org/mockito/stubbing/Answer4.h>
#include <org/mockito/stubbing/Answer5.h>
#include <org/mockito/stubbing/BaseStubber.h>
#include <org/mockito/stubbing/LenientStubber.h>
#include <org/mockito/stubbing/OngoingStubbing.h>
#include <org/mockito/stubbing/Stubber.h>
#include <org/mockito/stubbing/Stubbing.h>
#include <org/mockito/stubbing/ValidableAnswer.h>
#include <org/mockito/stubbing/VoidAnswer1.h>
#include <org/mockito/stubbing/VoidAnswer2.h>
#include <org/mockito/stubbing/VoidAnswer3.h>
#include <org/mockito/stubbing/VoidAnswer4.h>
#include <org/mockito/stubbing/VoidAnswer5.h>
#include <org/mockito/verification/After.h>
#include <org/mockito/verification/Timeout.h>
#include <org/mockito/verification/VerificationAfterDelay.h>
#include <org/mockito/verification/VerificationEvent.h>
#include <org/mockito/verification/VerificationMode.h>
#include <org/mockito/verification/VerificationStrategy.h>
#include <org/mockito/verification/VerificationWithTimeout.h>
#include <com/google/j2objc/mockito/InvocationHandlerAdapter.h>
#include <com/google/j2objc/mockito/IosMockMaker.h>
#include <org/objenesis/ObjenesisHelper.h>
